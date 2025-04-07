#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5570);

#define public_65d578d _public_65d578d
#define public_65d57b3 _public_65d57b3
#define public_65d57c2 _public_65d57c2
#define public_65d57cf _public_65d57cf
#define public_65d57db _public_65d57db
#define public_65d5808 _public_65d5808
#define public_65d5820 _public_65d5820
#define public_65d5839 _public_65d5839
#define public_65d584d _public_65d584d

PROC_DECLARE(0x65d5770, internal_65d5770, public_65d5770);
extern "C" NAKED register_t __cdecl internal_65d5770()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov ecx, esi
        call public_65d5570
        test eax, eax
        je public_65d578d
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 0xC
        public_65d578d : nop
        mov eax, dword ptr ds : [esi+0x100C]
        mov ecx, dword ptr ds : [esi+0x1008]
        lea edx, ds:[esi+8]
        xor ebx, ebx
        cmp eax, ecx
        lea esi, ds:[eax+edx]
        jg public_65d57b3
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], ebx
        jmp public_65d57c2
        public_65d57b3 : nop
        mov edi, 0x1000
        mov dword ptr ss : [esp+0x14], edx
        sub edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        public_65d57c2 : nop
        cmp edi, ebx
        jne public_65d57cf
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_65d57cf : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, edi
        cmp edi, ebx
        jl public_65d57db
        mov eax, ebx
        public_65d57db : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, eax
        push ebp
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        sub ebx, eax
        and ecx, 3
        test ebx, ebx
        rep movsb
        jle public_65d5820
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        je public_65d5820
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        jge public_65d5808
        mov ebx, ecx
        public_65d5808 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov ebp, ecx
        add esi, eax
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        add eax, ebx
        rep movsb
        public_65d5820 : nop
        mov edi, dword ptr ds : [edx+0x1004]
        pop ebp
        add edi, eax
        mov ecx, edi
        mov dword ptr ds : [edx+0x1004], edi
        cmp ecx, 0x1000
        jl public_65d584d
        public_65d5839 : nop
        sub ecx, 0x1000
        cmp ecx, 0x1000
        jge public_65d5839
        mov dword ptr ds : [edx+0x1004], ecx
        public_65d584d : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x65d5770)
    }
}

#undef public_65d578d
#undef public_65d57b3
#undef public_65d57c2
#undef public_65d57cf
#undef public_65d57db
#undef public_65d5808
#undef public_65d5820
#undef public_65d5839
#undef public_65d584d
