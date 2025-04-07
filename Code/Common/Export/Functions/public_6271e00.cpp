#include "Common-PCH.h"


#define public_6271e20 _public_6271e20
#define public_6271e2d _public_6271e2d
#define public_6271e64 _public_6271e64

PROC_DECLARE(0x6271e00, internal_6271e00, public_6271e00);
extern "C" NAKED register_t __cdecl internal_6271e00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        je public_6271e64
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        cmp ebx, ecx
        push esi
        je public_6271e2d
        xor esi, esi
        mov edx, edi
        nop 
        lea esp, ss:[esp]
        public_6271e20 : nop
        mov edx, dword ptr ds : [edx]
        inc esi
        cmp edx, eax
        jne public_6271e20
        add dword ptr ds : [ecx+8], esi
        sub dword ptr ds : [ebx+8], esi
        public_6271e2d : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        pop esi
        mov dword ptr ds : [ecx+4], edx
        pop ebx
        public_6271e64 : nop
        pop edi
        ret 0x10
        UNREACHABLE_TRAP(0x6271e00)
    }
}

#undef public_6271e20
#undef public_6271e2d
#undef public_6271e64
