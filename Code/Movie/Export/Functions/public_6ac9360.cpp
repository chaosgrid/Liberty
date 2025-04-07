#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac9360);
CLANG_FORWARD_PROC_SYMBOL(public_6acbedd);

#define public_6ac9380 _public_6ac9380
#define public_6ac93d5 _public_6ac93d5
#define public_6ac93d9 _public_6ac93d9
#define public_6ac93ea _public_6ac93ea
#define public_6ac9402 _public_6ac9402
#define public_6ac941c _public_6ac941c

PROC_DECLARE(0x6ac9360, internal_6ac9360, public_6ac9360);
extern "C" NAKED register_t __cdecl internal_6ac9360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov ecx, dword ptr ds : [eax+0x30]
        mov esi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        add ecx, esi
        and ebp, 0x3F
        cmp ecx, esi
        push edi
        mov dword ptr ds : [eax+0x30], ecx
        jae public_6ac9380
        inc dword ptr ds : [eax+0x2C]
        public_6ac9380 : nop
        test ebp, ebp
        jbe public_6ac93d5
        lea ecx, ss:[ebp+esi]
        cmp ecx, 0x40
        mov dword ptr ss : [esp+0x1C], ecx
        jb public_6ac93d5
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, 0x40
        sub ecx, ebp
        mov esi, ebx
        mov edx, ecx
        lea edi, ss:[ebp+eax+0x34]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x1C]
        and ecx, 3
        rep movsb
        mov ecx, 0x40
        lea esi, ds:[edx-0x40]
        sub ecx, ebp
        add ebx, ecx
        lea ecx, ds:[eax+0x34]
        add eax, 0x18
        push ecx
        push eax
        call public_6acbedd
        xor ebp, ebp
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_6ac93d9
        public_6ac93d5 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_6ac93d9 : nop
        cmp esi, 0x40
        jb public_6ac9402
        add eax, 0x18
        mov edi, esi
        mov dword ptr ss : [esp+0x18], eax
        shr edi, 6
        public_6ac93ea : nop
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        call public_6acbedd
        add ebx, 0x40
        sub esi, 0x40
        dec edi
        jne public_6ac93ea
        mov eax, dword ptr ss : [esp+0x14]
        public_6ac9402 : nop
        test esi, esi
        je public_6ac941c
        mov ecx, esi
        lea edi, ss:[ebp+eax+0x34]
        mov eax, ecx
        mov esi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        public_6ac941c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ac9360)
    }
}

#undef public_6ac9380
#undef public_6ac93d5
#undef public_6ac93d9
#undef public_6ac93ea
#undef public_6ac9402
#undef public_6ac941c
