#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6380f60);
CLANG_FORWARD_PROC_SYMBOL(public_638afe0);
CLANG_FORWARD_PROC_SYMBOL(public_638b630);

#define public_638b66b _public_638b66b
#define public_638b67b _public_638b67b
#define public_638b696 _public_638b696
#define public_638b6a3 _public_638b6a3
#define public_638b6b6 _public_638b6b6
#define public_638b6d4 _public_638b6d4
#define public_638b6f1 _public_638b6f1
#define public_638b706 _public_638b706

PROC_DECLARE(0x638b630, internal_638b630, public_638b630);
extern "C" NAKED register_t __cdecl internal_638b630()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x4C
        mov ecx, dword ptr ds : [public_658b24c]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        mov eax, ecx
        dec ecx
        test eax, eax
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        je public_638b6b6
        mov edx, dword ptr ss : [ebp+0x10]
        sub edx, esi
        mov dword ptr ss : [esp+0x14], edx
        mov edx, esi
        lea ebx, ss:[esp+0x18]
        lea eax, ss:[esp+ecx*8+0x18]
        sub edi, esi
        sub edx, ebx
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_638b66b : nop
        test esi, esi
        je public_638b67b
        lea ecx, ds:[edx+eax]
        fld qword ptr ds : [ecx+edi]
        fsub qword ptr ds : [ecx]
        fstp qword ptr ds : [eax]
        jmp public_638b6a3
        public_638b67b : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_638b696
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, edx
        mov ebx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [ecx+eax+4]
        mov dword ptr ds : [eax+4], ecx
        jmp public_638b6a3
        public_638b696 : nop
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        public_638b6a3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        dec ecx
        sub eax, 8
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        ja public_638b66b
        mov edi, dword ptr ss : [ebp+0xC]
        public_638b6b6 : nop
        test esi, esi
        je public_638b6d4
        mov edx, dword ptr ds : [public_658b24c]
        push 0
        push 0
        push 1
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_6380f60
        add esp, 0x14
        public_638b6d4 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, ecx
        dec ecx
        test edx, edx
        je public_638b706
        lea edx, ss:[esp+0x18]
        lea esi, ss:[esp+0x38]
        lea eax, ds:[edi+ecx*8]
        sub edx, edi
        sub esi, edi
        inc ecx
        public_638b6f1 : nop
        fld qword ptr ss : [ebp+0x18]
        dec ecx
        fmul qword ptr ds : [edx+eax]
        sub eax, 8
        test ecx, ecx
        fadd qword ptr ds : [eax+8]
        fstp qword ptr ds : [esi+eax+8]
        ja public_638b6f1
        public_638b706 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ss : [ebp+8]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edi
        push edx
        call public_638afe0
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638b630)
    }
}

#undef public_638b66b
#undef public_638b67b
#undef public_638b696
#undef public_638b6a3
#undef public_638b6b6
#undef public_638b6d4
#undef public_638b6f1
#undef public_638b706
