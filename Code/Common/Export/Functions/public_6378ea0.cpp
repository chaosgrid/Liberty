#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6378d10);
CLANG_FORWARD_PROC_SYMBOL(public_6378ea0);

#define public_6378f00 _public_6378f00
#define public_6378f5b _public_6378f5b
#define public_6378f63 _public_6378f63
#define public_6378fbb _public_6378fbb
#define public_6378fbd _public_6378fbd
#define public_6378fbf _public_6378fbf

PROC_DECLARE(0x6378ea0, internal_6378ea0, public_6378ea0);
extern "C" NAKED register_t __cdecl internal_6378ea0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi+0x10]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [edi+0x14]
        fsubp 
        fst dword ptr ss : [esp+0x1C]
        fabs 
        fcomp dword ptr ds : [public_63a5914]
        fnstsw ax
        test ah, 1
        je public_6378f00
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6378ba0
        fabs 
        fcomp dword ptr ds : [public_63a5994]
        fnstsw ax
        test ah, 1
        je public_6378fbf
        push edi
        mov ecx, esi
        call public_6378d10
        neg eax
        pop edi
        sbb eax, eax
        pop esi
        neg eax
        pop ebx
        add esp, 0xC
        ret 4
        public_6378f00 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_6378fbf
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6378fbf
        mov edx, dword ptr ds : [esi+0xC]
        cmp edx, ecx
        je public_6378fbf
        cmp edx, ebx
        je public_6378fbf
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_63a53d4]
        fld dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6378f5b
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        jmp public_6378f63
        public_6378f5b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], ecx
        public_6378f63 : nop
        fld dword ptr ds : [edi+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+0x14]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_6378fbb
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6378fbd
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_6378fbb
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_6378fbf
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_6378fbb : nop
        fstp st(0)
        public_6378fbd : nop
        fstp st(0)
        public_6378fbf : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6378ea0)
    }
}

#undef public_6378f00
#undef public_6378f5b
#undef public_6378f63
#undef public_6378fbb
#undef public_6378fbd
#undef public_6378fbf
