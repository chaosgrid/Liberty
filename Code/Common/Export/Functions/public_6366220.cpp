#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366220);

#define public_636624d _public_636624d
#define public_6366283 _public_6366283

PROC_DECLARE(0x6366220, internal_6366220, public_6366220);
extern "C" NAKED register_t __cdecl internal_6366220()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        mov edx, eax
        imul eax, ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        imul edx, edi
        lea edx, ds:[esi+edx*4]
        lea eax, ds:[esi+eax*4]
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        jle public_6366283
        add esi, 3
        push ebp
        shr esi, 2
        public_636624d : nop
        mov ebp, dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        mov dword ptr ds : [eax], ebp
        fstp dword ptr ds : [edx]
        mov ebp, dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+4], ebp
        fstp dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+8], ebp
        fstp dword ptr ds : [edx+8]
        mov ebp, dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0xC], ebp
        fstp dword ptr ds : [edx+0xC]
        add eax, 0x10
        add edx, 0x10
        dec esi
        jne public_636624d
        pop ebp
        public_6366283 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [eax+ebx*4]
        fld dword ptr ds : [eax+edi*4]
        mov dword ptr ds : [eax+edi*4], edx
        mov eax, dword ptr ds : [ecx+0x10]
        pop edi
        fstp dword ptr ds : [eax+ebx*4]
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6366220)
    }
}

#undef public_636624d
#undef public_6366283
