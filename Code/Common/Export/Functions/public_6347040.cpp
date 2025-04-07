#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6347040);
CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6352220);

#define public_6347070 _public_6347070
#define public_63470cf _public_63470cf
#define public_63470d4 _public_63470d4

PROC_DECLARE(0x6347040, internal_6347040, public_6347040);
extern "C" NAKED register_t __cdecl internal_6347040()
{
    __asm
    {
        sub esp, 8
        push ebx
        push edi
        mov edi, ecx
        call public_6346fb0
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov edx, dword ptr ds : [eax+0xFC]
        xor ebx, ebx
        mov bx, word ptr ds : [edi+0x52]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        dec ebx
        js public_63470d4
        push ebp
        push esi
        xor ebp, ebp
        public_6347070 : nop
        mov eax, dword ptr ds : [edi+0x54]
        mov esi, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [esi+0x78]
        and ecx, 0xFFFFFF08
        or ecx, 8
        mov dword ptr ds : [esi+0x78], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edx+0x10]
        push esi
        call public_634ebd0
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x44]
        lea ecx, ds:[esi+0x44]
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [ecx+4]
        fld st(0)
        fmul dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+8], ebp
        fadd dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ecx+0xC], ebp
        fadd dword ptr ds : [ecx+0x14]
        fstp dword ptr ds : [ecx+0x14]
        call public_6352220
        cmp dword ptr ds : [esi+0x40], ebp
        je public_63470cf
        push esi
        call public_634d510
        add esp, 4
        public_63470cf : nop
        dec ebx
        jns public_6347070
        pop esi
        pop ebp
        public_63470d4 : nop
        pop edi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6347040)
    }
}

#undef public_6347070
#undef public_63470cf
#undef public_63470d4
