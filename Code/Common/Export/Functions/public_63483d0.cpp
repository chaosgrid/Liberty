#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63483d0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

#define public_63483fc _public_63483fc
#define public_6348406 _public_6348406
#define public_6348420 _public_6348420

PROC_DECLARE(0x63483d0, internal_63483d0, public_63483d0);
extern "C" NAKED register_t __cdecl internal_63483d0()
{
    __asm
    {
        sub esp, 0x14
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edx]
        push ebx
        mov ebx, ecx
        fstp dword ptr ds : [ebx]
        fld dword ptr ds : [edx+0x14]
        push ebp
        fstp dword ptr ds : [ebx+0x14]
        fld dword ptr ds : [edx+0x28]
        push esi
        lea eax, ds:[ebx+4]
        push edi
        fstp dword ptr ds : [ebx+0x28]
        mov edi, 1
        mov dword ptr ss : [esp+0x10], eax
        lea ebp, ds:[ebx+0x10]
        public_63483fc : nop
        test edi, edi
        jle public_6348420
        mov ecx, ebp
        sub edx, ebx
        mov esi, edi
        public_6348406 : nop
        fld dword ptr ds : [edx+ecx]
        add eax, 0x10
        fld dword ptr ds : [edx+eax-0x10]
        add ecx, 4
        dec esi
        fstp dword ptr ds : [ecx-4]
        fstp dword ptr ds : [eax-0x10]
        jne public_6348406
        mov edx, dword ptr ss : [esp+0x28]
        public_6348420 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        add eax, 4
        add ebp, 0x10
        cmp edi, 3
        mov dword ptr ss : [esp+0x10], eax
        jl public_63483fc
        lea eax, ss:[esp+0x14]
        push eax
        add edx, 0x30
        push edx
        mov ecx, ebx
        call public_6348580
        fld dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ds : [ebx+0x30]
        fld dword ptr ss : [esp+0x18]
        pop edi
        fchs 
        fstp dword ptr ds : [ebx+0x34]
        fld dword ptr ss : [esp+0x18]
        pop esi
        fchs 
        fstp dword ptr ds : [ebx+0x38]
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x63483d0)
    }
}

#undef public_63483fc
#undef public_6348406
#undef public_6348420
