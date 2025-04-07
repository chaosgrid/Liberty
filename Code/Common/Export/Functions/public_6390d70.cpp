#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6390d70);

#define public_6390da2 _public_6390da2
#define public_6390dba _public_6390dba
#define public_6390dc6 _public_6390dc6
#define public_6390dd9 _public_6390dd9
#define public_6390deb _public_6390deb
#define public_6390dfb _public_6390dfb
#define public_6390e04 _public_6390e04
#define public_6390e25 _public_6390e25
#define public_6390eb4 _public_6390eb4
#define public_6390edf _public_6390edf
#define public_6390ee2 _public_6390ee2
#define public_6390ef9 _public_6390ef9

PROC_DECLARE(0x6390d70, internal_6390d70, public_6390d70);
extern "C" NAKED register_t __cdecl internal_6390d70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        xor ebp, ebp
        cmp eax, 4
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jl public_6390da2
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fb658 @0x6390d93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb658
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6390da2 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6390dc6
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6390dc6
        mov edx, 0xFEFFFFFF
        public_6390dba : nop
        and dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6390dba
        public_6390dc6 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6390e04
        lea edx, ds:[eax+4]
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        je public_6390e04
        public_6390dd9 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6390dfb
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6390dfb
        public_6390deb : nop
        or dword ptr ds : [eax+0x14], 0x1000000
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6390deb
        public_6390dfb : nop
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        jne public_6390dd9
        public_6390e04 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6390ef9
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6390ef9
        mov ebp, 2
        public_6390e25 : nop
        test dword ptr ds : [esi+0x14], 0x1000000
        jne public_6390ee2
        inc dword ptr ds : [public_658be98]
        mov edx, dword ptr ds : [ebx+0x34]
        push esi
        push edx
        mov dword ptr ss : [esp+0x18], 1
        call public_636e5a0
        mov eax, dword ptr ds : [esi+0xC]
        push ebx
        push eax
        call public_636e400
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_636ec10
        add esp, 0x14
        test eax, eax
        jne public_6390eb4
        mov edx, dword ptr ds : [esi+0x14]
        or edx, 0x8000000
        push esi
/*FIXUP push offset public_658b900 @0x6390e6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], edx
        call public_636e1b0
        mov ecx, dword ptr ds : [public_658bea0]
        mov eax, dword ptr ds : [public_658b078]
        add esp, 8
        inc ecx
        cmp eax, ebp
        mov dword ptr ds : [public_658bea0], ecx
        jl public_6390edf
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [public_658b7fc]
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63fb614 @0x6390ea3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb614
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        jmp public_6390edf
        public_6390eb4 : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_6390edf
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63fb5c8 @0x6390ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb5c8
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6390edf : nop
        sub edi, 4
        public_6390ee2 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6390e25
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6390ef9 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6390d70)
    }
}

#undef public_6390da2
#undef public_6390dba
#undef public_6390dc6
#undef public_6390dd9
#undef public_6390deb
#undef public_6390dfb
#undef public_6390e04
#undef public_6390e25
#undef public_6390eb4
#undef public_6390edf
#undef public_6390ee2
#undef public_6390ef9
