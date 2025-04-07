#include "Common-PCH.h"


#define public_6310fea _public_6310fea
#define public_6310ff0 _public_6310ff0
#define public_6311021 _public_6311021
#define public_6311033 _public_6311033
#define public_6311036 _public_6311036

PROC_DECLARE(0x6310fc0, internal_6310fc0, public_6310fc0);
extern "C" NAKED register_t __cdecl internal_6310fc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0x1564]
        test cl, cl
        push esi
        push edi
        je public_6311021
        mov ecx, dword ptr ds : [eax+0x1440]
        test ecx, ecx
        mov esi, dword ptr ds : [edx]
        je public_6310ff0
        mov edi, dword ptr ds : [eax+0x1444]
        cmp esi, edi
        jbe public_6310fea
        mov esi, edi
        public_6310fea : nop
        mov dword ptr ds : [eax+0x1448], esi
        public_6310ff0 : nop
        mov esi, dword ptr ds : [edx+4]
        add esi, ecx
        mov dword ptr ds : [eax+0x1454], esi
        mov si, word ptr ds : [edx+8]
        mov word ptr ds : [eax+0x1458], si
        mov esi, dword ptr ds : [edx+0xC]
        add esi, ecx
        mov dword ptr ds : [eax+0x145C], esi
        mov edx, dword ptr ds : [edx+0x10]
        add edx, ecx
        pop edi
        mov dword ptr ds : [eax+0x1460], edx
        pop esi
        ret 4
        public_6311021 : nop
        mov esi, dword ptr ds : [eax+0x18]
        test esi, esi
        mov ecx, dword ptr ds : [edx]
        je public_6311036
        mov esi, dword ptr ds : [eax+0x1C]
        cmp ecx, esi
        jbe public_6311033
        mov ecx, esi
        public_6311033 : nop
        mov dword ptr ds : [eax+0x20], ecx
        public_6311036 : nop
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+0x24], ecx
        lea esi, ds:[edx+8]
        lea edi, ds:[eax+0x28]
        mov ecx, 0x100
        rep movsd
        lea esi, ds:[edx+0x408]
        lea edi, ds:[eax+0x428]
        mov ecx, 0x100
        rep movsd
        lea esi, ds:[edx+0x808]
        lea edi, ds:[eax+0x828]
        mov ecx, 0x100
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6310fc0)
    }
}

#undef public_6310fea
#undef public_6310ff0
#undef public_6311021
#undef public_6311033
#undef public_6311036
