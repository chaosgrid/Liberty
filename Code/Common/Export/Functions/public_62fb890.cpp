#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fb890);

#define public_62fb8b0 _public_62fb8b0
#define public_62fb8d0 _public_62fb8d0
#define public_62fb8dd _public_62fb8dd
#define public_62fb8e5 _public_62fb8e5
#define public_62fb8ef _public_62fb8ef
#define public_62fb8f6 _public_62fb8f6
#define public_62fb8fa _public_62fb8fa
#define public_62fb902 _public_62fb902

PROC_DECLARE(0x62fb890, internal_62fb890, public_62fb890);
extern "C" NAKED register_t __cdecl internal_62fb890()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        jae public_62fb8fa
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        xor edx, edx
        cmp eax, esi
        je public_62fb8fa
        lea esp, ss:[esp]
        public_62fb8b0 : nop
        cmp edx, edi
        je public_62fb902
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        inc edx
        test bl, bl
        jne public_62fb8dd
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_62fb8f6
        lea ebx, ds:[ebx]
        public_62fb8d0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_62fb8d0
        jmp public_62fb8f6
        public_62fb8dd : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_62fb8ef
        public_62fb8e5 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_62fb8e5
        public_62fb8ef : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_62fb8f6
        mov eax, ecx
        public_62fb8f6 : nop
        cmp eax, esi
        jne public_62fb8b0
        public_62fb8fa : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_62fb902 : nop
        mov eax, dword ptr ds : [eax+0xC]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fb890)
    }
}

#undef public_62fb8b0
#undef public_62fb8d0
#undef public_62fb8dd
#undef public_62fb8e5
#undef public_62fb8ef
#undef public_62fb8f6
#undef public_62fb8fa
#undef public_62fb902
