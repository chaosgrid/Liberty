#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f49c);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f5a3);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f973);

#define public_6d2f998 _public_6d2f998
#define public_6d2f9b7 _public_6d2f9b7
#define public_6d2f9c1 _public_6d2f9c1
#define public_6d2f9cc _public_6d2f9cc
#define public_6d2f9d0 _public_6d2f9d0
#define public_6d2f9fc _public_6d2f9fc
#define public_6d2fa09 _public_6d2fa09
#define public_6d2fa14 _public_6d2fa14
#define public_6d2fa18 _public_6d2fa18
#define public_6d2fa25 _public_6d2fa25
#define public_6d2fa28 _public_6d2fa28
#define public_6d2fa36 _public_6d2fa36
#define public_6d2fa3a _public_6d2fa3a
#define public_6d2fa52 _public_6d2fa52
#define public_6d2fa57 _public_6d2fa57
#define public_6d2fa5e _public_6d2fa5e
#define public_6d2fa6b _public_6d2fa6b
#define public_6d2fa70 _public_6d2fa70
#define public_6d2fa80 _public_6d2fa80
#define public_6d2fa83 _public_6d2fa83
#define public_6d2fa8e _public_6d2fa8e
#define public_6d2fa95 _public_6d2fa95
#define public_6d2fabc _public_6d2fabc
#define public_6d2fac6 _public_6d2fac6
#define public_6d2fad4 _public_6d2fad4
#define public_6d2fadc _public_6d2fadc
#define public_6d2faef _public_6d2faef
#define public_6d2faf2 _public_6d2faf2
#define public_6d2fb03 _public_6d2fb03
#define public_6d2fb07 _public_6d2fb07
#define public_6d2fb0d _public_6d2fb0d
#define public_6d2fb21 _public_6d2fb21
#define public_6d2fb28 _public_6d2fb28
#define public_6d2fb2d _public_6d2fb2d
#define public_6d2fb30 _public_6d2fb30
#define public_6d2fb47 _public_6d2fb47
#define public_6d2fb4f _public_6d2fb4f
#define public_6d2fb57 _public_6d2fb57
#define public_6d2fb5d _public_6d2fb5d
#define public_6d2fb67 _public_6d2fb67
#define public_6d2fb6f _public_6d2fb6f
#define public_6d2fb95 _public_6d2fb95
#define public_6d2fba9 _public_6d2fba9
#define public_6d2fbac _public_6d2fbac
#define public_6d2fbc0 _public_6d2fbc0
#define public_6d2fbc7 _public_6d2fbc7
#define public_6d2fbce _public_6d2fbce
#define public_6d2fbd1 _public_6d2fbd1
#define public_6d2fbdc _public_6d2fbdc
#define public_6d2fbdf _public_6d2fbdf
#define public_6d2fc10 _public_6d2fc10
#define public_6d2fc15 _public_6d2fc15
#define public_6d2fc1c _public_6d2fc1c
#define public_6d2fc1f _public_6d2fc1f
#define public_6d2fc2b _public_6d2fc2b
#define public_6d2fc32 _public_6d2fc32
#define public_6d2fc3b _public_6d2fc3b
#define public_6d2fc42 _public_6d2fc42
#define public_6d2fc4a _public_6d2fc4a
#define public_6d2fc56 _public_6d2fc56
#define public_6d2fc5e _public_6d2fc5e
#define public_6d2fc60 _public_6d2fc60
#define public_6d2fc6c _public_6d2fc6c
#define public_6d2fc75 _public_6d2fc75
#define public_6d2fc81 _public_6d2fc81
#define public_6d2fc8a _public_6d2fc8a
#define public_6d2fc96 _public_6d2fc96
#define public_6d2fc98 _public_6d2fc98

PROC_DECLARE(0x6d2f973, internal_6d2f973, public_6d2f973);
extern "C" NAKED register_t __cdecl internal_6d2f973()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xDC
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x1C]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        mov esi, edx
        je public_6d2f9b7
        cmp esi, 0xFFFFFFFF
        jne public_6d2f998
        xor esi, esi
        public_6d2f998 : nop
        mov edx, esi
        and edx, 0x20B
        cmp esi, edx
        jne public_6d2f9b7
        test eax, eax
        je public_6d2f9c1
        cmp eax, 1
        je public_6d2f9c1
        cmp eax, 2
        je public_6d2f9c1
        cmp eax, 3
        je public_6d2f9c1
        public_6d2f9b7 : nop
        mov eax, 0x8876086C
        jmp public_6d2fc98
        public_6d2f9c1 : nop
        test ecx, ecx
        je public_6d2f9cc
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d2f9d0
        public_6d2f9cc : nop
        and dword ptr ss : [ebp-8], 0
        public_6d2f9d0 : nop
        cmp eax, 3
        je public_6d2f9fc
        push dword ptr ss : [ebp-8]
        call public_6d2f49c
        push eax
        push dword ptr ss : [ebp+0x24]
        push esi
        push edi
        call public_6d2f5a3
        add esp, 0x14
        test eax, eax
        mov dword ptr ss : [ebp-8], eax
        jne public_6d2fa09
        mov eax, 0x8876086A
        jmp public_6d2fc98
        public_6d2f9fc : nop
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d2fa09
        mov dword ptr ss : [ebp-8], 0x15
        public_6d2fa09 : nop
        test ebx, ebx
        je public_6d2fa14
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d2fa18
        public_6d2fa14 : nop
        or dword ptr ss : [ebp+8], 0xFFFFFFFF
        public_6d2fa18 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d2fa25
        mov eax, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ds : [eax]
        jmp public_6d2fa28
        public_6d2fa25 : nop
        or ebx, 0xFFFFFFFF
        public_6d2fa28 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_6d2fa36
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d2fa3a
        public_6d2fa36 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_6d2fa3a : nop
        or ecx, 0xFFFFFFFF
        cmp dword ptr ss : [ebp+8], ecx
        mov eax, 0x100
        jne public_6d2fa57
        cmp ebx, ecx
        jne public_6d2fa52
        mov ebx, eax
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d2fa70
        public_6d2fa52 : nop
        mov dword ptr ss : [ebp+8], ebx
        jmp public_6d2fa5e
        public_6d2fa57 : nop
        cmp ebx, ecx
        jne public_6d2fa5e
        mov ebx, dword ptr ss : [ebp+8]
        public_6d2fa5e : nop
        cmp dword ptr ss : [ebp+8], 0
        jne public_6d2fa6b
        mov dword ptr ss : [ebp+8], 1
        public_6d2fa6b : nop
        test ebx, ebx
        jne public_6d2fa70
        inc ebx
        public_6d2fa70 : nop
        mov esi, dword ptr ss : [ebp+0x24]
        cmp esi, 5
        jne public_6d2fa83
        cmp dword ptr ss : [ebp+8], ebx
        jbe public_6d2fa80
        mov ebx, dword ptr ss : [ebp+8]
        public_6d2fa80 : nop
        mov dword ptr ss : [ebp+8], ebx
        public_6d2fa83 : nop
        cmp dword ptr ss : [ebp-4], ecx
        je public_6d2fa8e
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d2fa95
        public_6d2fa8e : nop
        mov dword ptr ss : [ebp-4], 1
        public_6d2fa95 : nop
        cmp dword ptr ss : [ebp+0x20], 3
        je public_6d2fb6f
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[ebp-0xDC]
        push ecx
        push edi
        call dword ptr ds : [eax+0x1C]
        cmp esi, 4
        jne public_6d2fac6
        mov eax, dword ptr ss : [ebp-0x7C]
        cmp dword ptr ss : [ebp-4], eax
        jbe public_6d2fabc
        mov dword ptr ss : [ebp-4], eax
        public_6d2fabc : nop
        cmp dword ptr ss : [ebp+8], eax
        jbe public_6d2fb07
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d2fb07
        public_6d2fac6 : nop
        mov eax, dword ptr ss : [ebp-0x84]
        cmp dword ptr ss : [ebp+8], eax
        jbe public_6d2fad4
        mov dword ptr ss : [ebp+8], eax
        public_6d2fad4 : nop
        cmp ebx, dword ptr ss : [ebp-0x80]
        jbe public_6d2fadc
        mov ebx, dword ptr ss : [ebp-0x80]
        public_6d2fadc : nop
        cmp esi, 3
        jne public_6d2fb0d
        test byte ptr ss : [ebp-0xA0], 0x20
        je public_6d2faef
        xor eax, eax
        inc eax
        jmp public_6d2faf2
        public_6d2faef : nop
        mov eax, dword ptr ss : [ebp-0x74]
        public_6d2faf2 : nop
        test eax, eax
        je public_6d2fb0d
        mov ecx, eax
        imul ecx, ebx
        cmp dword ptr ss : [ebp+8], ecx
        jbe public_6d2fb03
        mov dword ptr ss : [ebp+8], ecx
        public_6d2fb03 : nop
        imul eax, dword ptr ss : [ebp+8]
        public_6d2fb07 : nop
        cmp ebx, eax
        jbe public_6d2fb0d
        mov ebx, eax
        public_6d2fb0d : nop
        mov eax, esi
        sub eax, 3
        je public_6d2fb28
        dec eax
        je public_6d2fb21
        dec eax
        jne public_6d2fb2d
        mov eax, 0x20000
        jmp public_6d2fb30
        public_6d2fb21 : nop
        mov eax, 0x40000
        jmp public_6d2fb30
        public_6d2fb28 : nop
        push 2
        pop eax
        jmp public_6d2fb30
        public_6d2fb2d : nop
        mov eax, dword ptr ss : [ebp+8]
        public_6d2fb30 : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        test ecx, eax
        je public_6d2fb6f
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        inc ecx
        cmp eax, ecx
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d2fb4f
        public_6d2fb47 : nop
        shl dword ptr ss : [ebp+8], 1
        cmp dword ptr ss : [ebp+8], eax
        jb public_6d2fb47
        public_6d2fb4f : nop
        mov eax, ebx
        cmp eax, ecx
        mov ebx, ecx
        jbe public_6d2fb5d
        public_6d2fb57 : nop
        shl ebx, 1
        cmp ebx, eax
        jb public_6d2fb57
        public_6d2fb5d : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, ecx
        mov dword ptr ss : [ebp-4], ecx
        jbe public_6d2fb6f
        public_6d2fb67 : nop
        shl dword ptr ss : [ebp-4], 1
        cmp dword ptr ss : [ebp-4], eax
        jb public_6d2fb67
        public_6d2fb6f : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, 0x31545844
        je public_6d2fb95
        cmp eax, 0x32545844
        je public_6d2fb95
        cmp eax, 0x33545844
        je public_6d2fb95
        cmp eax, 0x34545844
        je public_6d2fb95
        cmp eax, 0x35545844
        jne public_6d2fba9
        public_6d2fb95 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ds:[eax+3]
        and edx, 0xFFFFFFFC
        add ebx, 3
        mov dword ptr ss : [ebp+8], edx
        and ebx, 0xFFFFFFFC
        jmp public_6d2fbac
        public_6d2fba9 : nop
        mov edx, dword ptr ss : [ebp+8]
        public_6d2fbac : nop
        mov eax, esi
        sub eax, 3
        je public_6d2fbc7
        dec eax
        je public_6d2fbc0
        dec eax
        jne public_6d2fbce
        mov eax, 0x10000
        jmp public_6d2fbd1
        public_6d2fbc0 : nop
        mov eax, 0x8000
        jmp public_6d2fbd1
        public_6d2fbc7 : nop
        mov eax, 0x4000
        jmp public_6d2fbd1
        public_6d2fbce : nop
        mov eax, dword ptr ss : [ebp+8]
        public_6d2fbd1 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        je public_6d2fbdc
        mov edi, dword ptr ds : [ecx]
        jmp public_6d2fbdf
        public_6d2fbdc : nop
        or edi, 0xFFFFFFFF
        public_6d2fbdf : nop
        cmp dword ptr ss : [ebp+0x20], 3
        je public_6d2fc15
        mov ecx, dword ptr ss : [ebp-0xA0]
        test ecx, eax
        je public_6d2fc10
        test byte ptr ss : [ebp-0x9F], 1
        je public_6d2fc15
        lea eax, ds:[edx-1]
        test edx, eax
        jne public_6d2fc10
        lea eax, ds:[ebx-1]
        test ebx, eax
        jne public_6d2fc10
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6d2fc15
        public_6d2fc10 : nop
        xor edi, edi
        inc edi
        jmp public_6d2fc60
        public_6d2fc15 : nop
        mov eax, dword ptr ss : [ebp+8]
        xor esi, esi
        jmp public_6d2fc1f
        public_6d2fc1c : nop
        shr eax, 1
        inc esi
        public_6d2fc1f : nop
        test eax, eax
        jne public_6d2fc1c
        xor ecx, ecx
        test ebx, ebx
        mov eax, ebx
        je public_6d2fc32
        public_6d2fc2b : nop
        shr eax, 1
        inc ecx
        test eax, eax
        jne public_6d2fc2b
        public_6d2fc32 : nop
        mov eax, dword ptr ss : [ebp-4]
        xor edx, edx
        test eax, eax
        je public_6d2fc42
        public_6d2fc3b : nop
        shr eax, 1
        inc edx
        test eax, eax
        jne public_6d2fc3b
        public_6d2fc42 : nop
        cmp esi, ecx
        mov eax, esi
        ja public_6d2fc4a
        mov eax, ecx
        public_6d2fc4a : nop
        cmp dword ptr ss : [ebp+0x24], 4
        jne public_6d2fc56
        cmp edx, eax
        jbe public_6d2fc56
        mov eax, edx
        public_6d2fc56 : nop
        cmp edi, eax
        ja public_6d2fc5e
        test edi, edi
        jne public_6d2fc60
        public_6d2fc5e : nop
        mov edi, eax
        public_6d2fc60 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d2fc6c
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        public_6d2fc6c : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6d2fc75
        mov dword ptr ds : [eax], ebx
        public_6d2fc75 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_6d2fc81
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        public_6d2fc81 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_6d2fc8a
        mov dword ptr ds : [eax], edi
        public_6d2fc8a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d2fc96
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        public_6d2fc96 : nop
        xor eax, eax
        public_6d2fc98 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d2f973)
    }
}

#undef public_6d2f998
#undef public_6d2f9b7
#undef public_6d2f9c1
#undef public_6d2f9cc
#undef public_6d2f9d0
#undef public_6d2f9fc
#undef public_6d2fa09
#undef public_6d2fa14
#undef public_6d2fa18
#undef public_6d2fa25
#undef public_6d2fa28
#undef public_6d2fa36
#undef public_6d2fa3a
#undef public_6d2fa52
#undef public_6d2fa57
#undef public_6d2fa5e
#undef public_6d2fa6b
#undef public_6d2fa70
#undef public_6d2fa80
#undef public_6d2fa83
#undef public_6d2fa8e
#undef public_6d2fa95
#undef public_6d2fabc
#undef public_6d2fac6
#undef public_6d2fad4
#undef public_6d2fadc
#undef public_6d2faef
#undef public_6d2faf2
#undef public_6d2fb03
#undef public_6d2fb07
#undef public_6d2fb0d
#undef public_6d2fb21
#undef public_6d2fb28
#undef public_6d2fb2d
#undef public_6d2fb30
#undef public_6d2fb47
#undef public_6d2fb4f
#undef public_6d2fb57
#undef public_6d2fb5d
#undef public_6d2fb67
#undef public_6d2fb6f
#undef public_6d2fb95
#undef public_6d2fba9
#undef public_6d2fbac
#undef public_6d2fbc0
#undef public_6d2fbc7
#undef public_6d2fbce
#undef public_6d2fbd1
#undef public_6d2fbdc
#undef public_6d2fbdf
#undef public_6d2fc10
#undef public_6d2fc15
#undef public_6d2fc1c
#undef public_6d2fc1f
#undef public_6d2fc2b
#undef public_6d2fc32
#undef public_6d2fc3b
#undef public_6d2fc42
#undef public_6d2fc4a
#undef public_6d2fc56
#undef public_6d2fc5e
#undef public_6d2fc60
#undef public_6d2fc6c
#undef public_6d2fc75
#undef public_6d2fc81
#undef public_6d2fc8a
#undef public_6d2fc96
#undef public_6d2fc98
