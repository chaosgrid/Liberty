#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);

#define public_634b7e6 _public_634b7e6
#define public_634b7ea _public_634b7ea
#define public_634b801 _public_634b801
#define public_634b845 _public_634b845
#define public_634b84b _public_634b84b

PROC_DECLARE(0x634b7d0, internal_634b7d0, public_634b7d0);
extern "C" NAKED register_t __cdecl internal_634b7d0()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        xor ebp, ebp
        mov bp, word ptr ds : [ecx+0x36]
        mov dword ptr ss : [esp+8], ecx
        dec ebp
        js public_634b84b
        push ebx
        push esi
        push edi
        jmp public_634b7ea
        public_634b7e6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_634b7ea : nop
        mov eax, dword ptr ds : [ecx+0x38]
        mov ebx, dword ptr ds : [eax+ebp*4]
        xor edi, edi
        mov di, word ptr ds : [ebx+2]
        mov dword ptr ss : [esp+0x10], 0
        dec edi
        js public_634b845
        public_634b801 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [ecx+edi*4]
        mov edx, dword ptr ds : [esi+0x58]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edx
        call public_635a1e0
        fld dword ptr ds : [esi+0x58]
        dec edi
        fsubr dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x54]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        jns public_634b801
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_634b845
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+0x24]
        fstp dword ptr ds : [ebx+0x24]
        public_634b845 : nop
        dec ebp
        jns public_634b7e6
        pop edi
        pop esi
        pop ebx
        public_634b84b : nop
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x634b7d0)
    }
}

#undef public_634b7e6
#undef public_634b7ea
#undef public_634b801
#undef public_634b845
#undef public_634b84b
