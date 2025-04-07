#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_479d10);

#define public_4b7073 _public_4b7073
#define public_4b7090 _public_4b7090
#define public_4b70b0 _public_4b70b0
#define public_4b70c6 _public_4b70c6
#define public_4b70f0 _public_4b70f0
#define public_4b7117 _public_4b7117
#define public_4b713f _public_4b713f
#define public_4b714e _public_4b714e

PROC_DECLARE(0x4b7050, internal_4b7050, public_4b7050);
extern "C" NAKED register_t __cdecl internal_4b7050()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, 0x26
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        je public_4b714e
        sub eax, 0x23
        je public_4b7090
        dec eax
        jne public_4b7073
        or byte ptr ds : [edi+0x6C], 3
        public_4b7073 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_479d10
        pop edi
        add esp, 0xC
        ret 0xC
        public_4b7090 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push ebp
        mov dword ptr ds : [edi+0x348], eax
        mov ebp, dword ptr ds : [edi+0x97C]
        lea ebx, ds:[edi+0x978]
        push esi
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_4b70c6
        public_4b70b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6188]
        cmp esi, ebp
        jne public_4b70b0
        public_4b70c6 : nop
        mov esi, dword ptr ss : [esp+0x24]
        cmp ebx, esi
        je public_4b713f
        mov ebp, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6410]
        cmp ebx, ebp
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], eax
        je public_4b7117
        mov eax, dword ptr ss : [esp+0x10]
        public_4b70f0 : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_4b7117
        lea esi, ds:[eax+8]
        lea edi, ds:[ebx+8]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        jne public_4b70f0
        public_4b7117 : nop
        push ebp
        push ebx
        lea edx, ss:[esp+0x1C]
        lea esi, ds:[edi+0x978]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c618c]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c636c]
        public_4b713f : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        pop esi
        pop ebp
        pop ebx
        jmp public_4b7073
        public_4b714e : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [edi+0x4D8]
        jne public_4b7073
        mov edx, dword ptr ds : [edi]
        push 0
        push 0
        push 0xEF02
        mov ecx, edi
        call dword ptr ds : [edx+0x5C]
        mov eax, 1
        pop edi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4b7050)
    }
}

#undef public_4b7073
#undef public_4b7090
#undef public_4b70b0
#undef public_4b70c6
#undef public_4b70f0
#undef public_4b7117
#undef public_4b713f
#undef public_4b714e
