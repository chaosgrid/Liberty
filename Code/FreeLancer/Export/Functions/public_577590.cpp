#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576b60);
CLANG_FORWARD_PROC_SYMBOL(public_576bb0);
CLANG_FORWARD_PROC_SYMBOL(public_576f40);
CLANG_FORWARD_PROC_SYMBOL(public_577590);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_577606 _public_577606
#define public_577613 _public_577613
#define public_577630 _public_577630
#define public_57763d _public_57763d
#define public_577662 _public_577662
#define public_577676 _public_577676

PROC_DECLARE(0x577590, internal_577590, public_577590);
extern "C" NAKED register_t __cdecl internal_577590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c220]
        test eax, eax
        push edi
        je public_577676
        mov al, byte ptr ds : [public_67c3b0]
        test al, al
        jne public_577613
        push 1
/*FIXUP push offset public_614cd0 @0x5775a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_614cd0
        call public_576bb0
        add esp, 8
        test eax, eax
        je public_577613
        mov al, byte ptr ds : [public_67c2a0]
        test al, al
        mov byte ptr ds : [public_67c3b0], 1
        jne public_577606
/*FIXUP push offset public_67c2a0 @0x5775ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c2a0
        call dword ptr ds : [public_5c6c00]
        mov edx, dword ptr ds : [public_5e4278]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        add esp, 4
        mov edi, offset public_67c2a0
        repne scasb
        mov eax, dword ptr ds : [public_5e4270]
        mov ecx, dword ptr ds : [public_5e4274]
        dec edi
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [public_5e427c]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], eax
/*FIXUP public_577606 : nop
        push offset public_67c2a0 @0x577606*/
  FIXUP public_577606 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c2a0
        call public_576f40
        add esp, 4
        public_577613 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        call public_576b60
        add esp, 4
        test eax, eax
        je public_577662
        mov edx, dword ptr ds : [public_67c21c]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_577676
        public_577630 : nop
        cmp dword ptr ds : [ecx+8], eax
        je public_57763d
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_577630
        pop edi
        ret 
        public_57763d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        push ecx
        mov dword ptr ds : [edx+4], eax
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67c220]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67c220], eax
        pop edi
        ret 
        public_577662 : nop
        push 0
/*FIXUP push offset public_5e4418 @0x577664*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4418
/*FIXUP push offset public_5e4404 @0x577669*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4404
        push 0
        call dword ptr ds : [public_5c72d4]
        public_577676 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x577590)
    }
}

#undef public_577606
#undef public_577613
#undef public_577630
#undef public_57763d
#undef public_577662
#undef public_577676
