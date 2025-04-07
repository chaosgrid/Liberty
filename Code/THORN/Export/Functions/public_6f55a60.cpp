#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f55a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f56d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f56db0);

#define public_6f55a81 _public_6f55a81
#define public_6f55ab6 _public_6f55ab6
#define public_6f55abf _public_6f55abf
#define public_6f55ae1 _public_6f55ae1
#define public_6f55ae6 _public_6f55ae6
#define public_6f55afe _public_6f55afe
#define public_6f55b04 _public_6f55b04
#define public_6f55b08 _public_6f55b08
#define public_6f55b3f _public_6f55b3f
#define public_6f55b44 _public_6f55b44
#define public_6f55b59 _public_6f55b59
#define public_6f55b60 _public_6f55b60
#define public_6f55b65 _public_6f55b65
#define public_6f55b6a _public_6f55b6a
#define public_6f55b75 _public_6f55b75
#define public_6f55b8b _public_6f55b8b

PROC_DECLARE(0x6f55a60, internal_6f55a60, public_6f55a60);
extern "C" NAKED register_t __cdecl internal_6f55a60()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [ebp]
        test al, al
        push esi
        mov dword ptr ss : [esp+8], 0
        mov esi, 0xFFFFFFFE
        je public_6f55b8b
        push ebx
        push edi
        public_6f55a81 : nop
        movsx eax, al
        sub eax, 0x7B
        je public_6f55b60
        sub eax, 2
        je public_6f55b44
        push ebp
        call public_6f56d50
        add esp, 4
        cmp esi, 0xFFFFFFFE
        mov ebx, eax
        jne public_6f55ab6
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_6f5a0f0]
        add esp, 4
        mov esi, eax
        public_6f55ab6 : nop
        cmp esi, 0xFFFFFFFF
        jne public_6f55abf
        xor edi, edi
        jmp public_6f55ae6
        public_6f55abf : nop
        push ebx
        push ebp
        push esi
        call public_6f56db0
        mov edi, eax
        add esp, 0xC
        test edi, edi
        je public_6f55ae6
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6f55ae1
        push esi
        call public_6f55450
        add esp, 4
        public_6f55ae1 : nop
        mov esi, 0xFFFFFFFE
        public_6f55ae6 : nop
        movsx eax, byte ptr ds : [ebx]
        sub eax, 0x2A
        je public_6f55b04
        dec eax
        je public_6f55afe
        sub eax, 0x14
        je public_6f55b3f
        test edi, edi
        je public_6f55b75
        mov ebp, ebx
        jmp public_6f55b6a
        public_6f55afe : nop
        test edi, edi
        je public_6f55b75
        jmp public_6f55b08
        public_6f55b04 : nop
        test edi, edi
        je public_6f55b3f
        public_6f55b08 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call dword ptr ds : [public_6f5a0f0]
        mov esi, eax
        add esp, 4
        cmp esi, 0xFFFFFFFF
        je public_6f55b3f
        push ebx
        push ebp
        push esi
        call public_6f56db0
        add esp, 0xC
        test eax, eax
        je public_6f55b3f
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6f55b08
        push esi
        call public_6f55450
        add esp, 4
        jmp public_6f55b08
        public_6f55b3f : nop
        lea ebp, ds:[ebx+1]
        jmp public_6f55b6a
        public_6f55b44 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6f55b59
/*FIXUP push offset public_6f6190c @0x6f55b4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6190c
        call public_6f4c7f0
        add esp, 4
        public_6f55b59 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        dec ecx
        jmp public_6f55b65
        public_6f55b60 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        public_6f55b65 : nop
        mov dword ptr ss : [esp+0x10], ecx
        inc ebp
        public_6f55b6a : nop
        mov al, byte ptr ss : [ebp]
        test al, al
        jne public_6f55a81
        public_6f55b75 : nop
        cmp esi, 0xFFFFFFFE
        pop edi
        pop ebx
        je public_6f55b8b
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push esi
        call dword ptr ds : [public_6f5a0ac]
        add esp, 8
        public_6f55b8b : nop
        mov cl, byte ptr ss : [ebp]
        xor eax, eax
        test cl, cl
        pop esi
        sete al
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f55a60)
    }
}

#undef public_6f55a81
#undef public_6f55ab6
#undef public_6f55abf
#undef public_6f55ae1
#undef public_6f55ae6
#undef public_6f55afe
#undef public_6f55b04
#undef public_6f55b08
#undef public_6f55b3f
#undef public_6f55b44
#undef public_6f55b59
#undef public_6f55b60
#undef public_6f55b65
#undef public_6f55b6a
#undef public_6f55b75
#undef public_6f55b8b
