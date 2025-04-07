#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d051d0);

#define public_6d051e7 _public_6d051e7
#define public_6d051f2 _public_6d051f2
#define public_6d051ff _public_6d051ff
#define public_6d05210 _public_6d05210
#define public_6d0521c _public_6d0521c
#define public_6d05225 _public_6d05225

PROC_DECLARE(0x6d051d0, internal_6d051d0, public_6d051d0);
extern "C" NAKED register_t __cdecl internal_6d051d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6d051ff
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d051f2
        public_6d051e7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d051e7
        public_6d051f2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6d051ff : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d0521c
        lea esp, ss:[esp]
        public_6d05210 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d05210
        public_6d0521c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d05225
        mov dword ptr ds : [ecx], eax
        public_6d05225 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d051d0)
    }
}

#undef public_6d051e7
#undef public_6d051f2
#undef public_6d051ff
#undef public_6d05210
#undef public_6d0521c
#undef public_6d05225
