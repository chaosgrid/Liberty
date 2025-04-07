#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63454e0);
CLANG_FORWARD_PROC_SYMBOL(public_63470e0);
CLANG_FORWARD_PROC_SYMBOL(public_6347170);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_634720d _public_634720d
#define public_634722a _public_634722a

PROC_DECLARE(0x6347170, internal_6347170, public_6347170);
extern "C" NAKED register_t __cdecl internal_6347170()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x60]
        and eax, 0xFFFFFF01
        or eax, 1
        mov dword ptr ds : [esi+0x60], eax
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+0xAC]
        mov ebx, dword ptr ds : [eax+0xFC]
        push edi
        fld st(0)
        mov edi, dword ptr ds : [eax+0xF8]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ebx
        call public_6391dae
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fxch 
        fsub st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x18]
        fsubrp 
        fld st(0)
        call public_6391dae
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fxch 
        mov dword ptr ds : [esi+0x68], ecx
        fsub st, st(1)
        mov ecx, esi
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x6C], edx
        fstp st(0)
        call public_63470e0
        mov dword ptr ds : [esi+0x68], edi
        xor edi, edi
        mov dword ptr ds : [esi+0x6C], ebx
        mov di, word ptr ds : [esi+0x52]
        dec edi
        js public_634722a
        public_634720d : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx+0x78]
        and edx, 0xFFFFFF01
        or edx, 1
        mov dword ptr ds : [ecx+0x78], edx
        call public_63454e0
        dec edi
        jns public_634720d
        public_634722a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6347170)
    }
}

#undef public_634720d
#undef public_634722a
