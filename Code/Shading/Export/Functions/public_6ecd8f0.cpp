#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);

#define public_6ecd900 _public_6ecd900
#define public_6ecd91e _public_6ecd91e
#define public_6ecd94d _public_6ecd94d
#define public_6ecd955 _public_6ecd955
#define public_6ecd978 _public_6ecd978
#define public_6ecd988 _public_6ecd988

PROC_DECLARE(0x6ecd8f0, internal_6ecd8f0, public_6ecd8f0);
extern "C" NAKED register_t __cdecl internal_6ecd8f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        jne public_6ecd900
        or eax, eax
        pop ecx
        ret 0xC
        public_6ecd900 : nop
        push ebx
        or ebx, 0xFFFFFFFF
        test eax, eax
        jne public_6ecd91e
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov eax, ebx
        mov dword ptr ds : [edx], ecx
        pop ebx
        pop ecx
        ret 0xC
        public_6ecd91e : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x28]
        push eax
        mov ecx, esi
        call public_6ec6120
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ecd94d
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ecd94d
        lea eax, ss:[esp+0x14]
        jmp public_6ecd955
        public_6ecd94d : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ecd955 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6ecd988
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        jne public_6ecd978
        mov edx, dword ptr ss : [esp+0x14]
        xor eax, eax
        xor ebx, ebx
        mov dword ptr ds : [edx], eax
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        public_6ecd978 : nop
        mov eax, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor ebx, ebx
        public_6ecd988 : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ecd8f0)
    }
}

#undef public_6ecd900
#undef public_6ecd91e
#undef public_6ecd94d
#undef public_6ecd955
#undef public_6ecd978
#undef public_6ecd988
