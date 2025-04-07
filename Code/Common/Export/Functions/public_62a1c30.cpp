#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);

#define public_62a1c47 _public_62a1c47
#define public_62a1c52 _public_62a1c52
#define public_62a1c5f _public_62a1c5f
#define public_62a1c70 _public_62a1c70
#define public_62a1c7c _public_62a1c7c
#define public_62a1c85 _public_62a1c85

PROC_DECLARE(0x62a1c30, internal_62a1c30, public_62a1c30);
extern "C" NAKED register_t __cdecl internal_62a1c30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_62a1c5f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_62a1c52
        public_62a1c47 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_62a1c47
        public_62a1c52 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_62a1c5f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62a1c7c
        lea esp, ss:[esp]
        public_62a1c70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62a1c70
        public_62a1c7c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62a1c85
        mov dword ptr ds : [ecx], eax
        public_62a1c85 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62a1c30)
    }
}

#undef public_62a1c47
#undef public_62a1c52
#undef public_62a1c5f
#undef public_62a1c70
#undef public_62a1c7c
#undef public_62a1c85
