#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8d40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9f60);

#define public_6ac9fea _public_6ac9fea
#define public_6ac9fee _public_6ac9fee
#define public_6aca046 _public_6aca046
#define public_6aca04e _public_6aca04e
#define public_6aca0ba _public_6aca0ba

PROC_DECLARE(0x6ac9f60, internal_6ac9f60, public_6ac9f60);
extern "C" NAKED register_t __cdecl internal_6ac9f60()
{
    __asm
    {
        sub esp, 0x124
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x144]
        mov ecx, dword ptr ss : [esp+0x140]
        mov eax, esi
        lea ebp, ds:[esi+0x1F]
        push edi
        shr eax, 5
        shr ebp, 5
        inc eax
        mov dword ptr ss : [esp+0x24], ebp
        push eax
        push ecx
        call public_6ac8d40
        lea edx, ds:[esi+1]
        xor ecx, ecx
        cmp eax, edx
        lea edx, ds:[ebp*4]
        sete cl
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, edx
        mov ebx, ecx
        xor eax, eax
        lea edi, ss:[esp+0x34]
        shr ecx, 2
        rep stosd
        mov ecx, ebx
        and ecx, 3
        test ebp, ebp
        rep stosb
        je public_6aca0ba
        lea ecx, ds:[esi-1]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], ecx
        je public_6aca0ba
        mov edx, ecx
        mov esi, ecx
        shr edx, 5
        and esi, 0x1F
        lea eax, ss:[esp+edx*4+0x34]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6ac9fee
        public_6ac9fea : nop
        mov esi, dword ptr ss : [esp+0x30]
        public_6ac9fee : nop
        mov eax, dword ptr ss : [esp+0x138]
        mov edx, ecx
        shr edx, 5
        and ecx, 0x1F
        mov ebx, dword ptr ss : [esp+0x13C]
        mov eax, dword ptr ds : [eax+edx*4]
        mov edi, dword ptr ss : [esp+0x144]
        shr eax, cl
        mov ecx, dword ptr ss : [esp+0x1C]
        sub ebx, edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x28], ebx
        mov edx, dword ptr ds : [ecx]
        mov ecx, esi
        shr edx, cl
        and eax, 1
        lea ecx, ss:[esp+0x34]
        neg eax
        lea esi, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x10], ebp
        and edx, 1
        neg edx
        sub edi, ecx
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6aca04e
        public_6aca046 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x20]
        public_6aca04e : nop
        mov ecx, dword ptr ds : [esi]
        add edi, esi
        mov ebp, edx
        add esi, 4
        mov ebx, dword ptr ds : [edi+ebx]
        and ebp, dword ptr ds : [edi]
        and ebx, eax
        lea edi, ds:[ecx+ecx]
        xor ebx, ebp
        mov ebp, dword ptr ss : [esp+0x14]
        xor ebx, edi
        shr ecx, 0x1F
        xor ebx, ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi-4], ebx
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6aca046
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x148]
        mov ecx, ebp
        shl ecx, 5
        sub ecx, eax
        or eax, 0xFFFFFFFF
        lea edx, ds:[ebp*4]
        shr eax, cl
        mov edi, dword ptr ss : [esp+edx+0x30]
        mov ecx, dword ptr ss : [esp+0x18]
        and edi, eax
        dec ecx
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+edx+0x30], edi
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6ac9fea
        public_6aca0ba : nop
        mov edi, dword ptr ss : [esp+0x140]
        mov ecx, edx
        lea esi, ss:[esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x124
        ret 0x14
        UNREACHABLE_TRAP(0x6ac9f60)
    }
}

#undef public_6ac9fea
#undef public_6ac9fee
#undef public_6aca046
#undef public_6aca04e
#undef public_6aca0ba
