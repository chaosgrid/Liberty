#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310f00);

#define public_6310f20 _public_6310f20
#define public_6310f22 _public_6310f22
#define public_6310f6b _public_6310f6b
#define public_6310f77 _public_6310f77
#define public_6310f79 _public_6310f79

PROC_DECLARE(0x6310f00, internal_6310f00, public_6310f00);
extern "C" NAKED register_t __cdecl internal_6310f00()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0x1564]
        test cl, cl
        push esi
        push edi
        je public_6310f6b
        mov ecx, dword ptr ds : [eax+0x1440]
        test ecx, ecx
        je public_6310f20
        mov edx, dword ptr ds : [eax+0x1448]
        jmp public_6310f22
        public_6310f20 : nop
        xor edx, edx
        public_6310f22 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov esi, dword ptr ds : [eax+0x1440]
        mov edx, dword ptr ds : [eax+0x1454]
        sub edx, esi
        mov dword ptr ds : [ecx+4], edx
        mov dx, word ptr ds : [eax+0x1458]
        mov word ptr ds : [ecx+8], dx
        mov edi, dword ptr ds : [eax+0x1440]
        mov edx, dword ptr ds : [eax+0x145C]
        sub edx, edi
        mov dword ptr ds : [ecx+0xC], edx
        mov esi, dword ptr ds : [eax+0x1440]
        mov edx, dword ptr ds : [eax+0x1460]
        sub edx, esi
        pop edi
        mov dword ptr ds : [ecx+0x10], edx
        pop esi
        ret 4
        public_6310f6b : nop
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        je public_6310f77
        mov ecx, dword ptr ds : [eax+0x20]
        jmp public_6310f79
        public_6310f77 : nop
        xor ecx, ecx
        public_6310f79 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [edx+4], ecx
        lea esi, ds:[eax+0x28]
        lea edi, ds:[edx+8]
        mov ecx, 0x100
        rep movsd
        lea esi, ds:[eax+0x428]
        lea edi, ds:[edx+0x408]
        mov ecx, 0x100
        rep movsd
        lea esi, ds:[eax+0x828]
        lea edi, ds:[edx+0x808]
        mov ecx, 0x100
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6310f00)
    }
}

#undef public_6310f20
#undef public_6310f22
#undef public_6310f6b
#undef public_6310f77
#undef public_6310f79
