#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576b60);
CLANG_FORWARD_PROC_SYMBOL(public_576bb0);
CLANG_FORWARD_PROC_SYMBOL(public_576f40);
CLANG_FORWARD_PROC_SYMBOL(public_577490);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5774fb _public_5774fb
#define public_577508 _public_577508
#define public_577530 _public_577530
#define public_57753b _public_57753b
#define public_577550 _public_577550
#define public_577564 _public_577564
#define public_57756a _public_57756a
#define public_577570 _public_577570

PROC_DECLARE(0x577490, internal_577490, public_577490);
extern "C" NAKED register_t __cdecl internal_577490()
{
    __asm
    {
        mov al, byte ptr ds : [public_67c3b0]
        test al, al
        push ebx
        push esi
        push edi
        jne public_577508
        push 1
/*FIXUP push offset public_614cd0 @0x57749e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_614cd0
        call public_576bb0
        add esp, 8
        test eax, eax
        je public_577508
        mov al, byte ptr ds : [public_67c2a0]
        test al, al
        mov byte ptr ds : [public_67c3b0], 1
        jne public_5774fb
/*FIXUP push offset public_67c2a0 @0x5774bf*/
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
/*FIXUP public_5774fb : nop
        push offset public_67c2a0 @0x5774fb*/
  FIXUP public_5774fb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c2a0
        call public_576f40
        add esp, 4
        public_577508 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_576b60
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_577570
        mov ecx, dword ptr ds : [public_67c21c]
        mov esi, dword ptr ds : [ecx]
        mov eax, esi
        cmp eax, ecx
        je public_57753b
        lea esp, ss:[esp]
        public_577530 : nop
        cmp dword ptr ds : [eax+8], ebx
        je public_57756a
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_577530
        public_57753b : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_577550
        mov edi, eax
        public_577550 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_577564
        mov dword ptr ds : [eax], ebx
        public_577564 : nop
        inc dword ptr ds : [public_67c220]
        public_57756a : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        public_577570 : nop
        push 0
/*FIXUP push offset public_5e4418 @0x577572*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4418
/*FIXUP push offset public_5e4404 @0x577577*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4404
        push 0
        call dword ptr ds : [public_5c72d4]
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x577490)
    }
}

#undef public_5774fb
#undef public_577508
#undef public_577530
#undef public_57753b
#undef public_577550
#undef public_577564
#undef public_57756a
#undef public_577570
