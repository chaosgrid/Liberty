#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_55ccac _public_55ccac
#define public_55ccd4 _public_55ccd4
#define public_55cd14 _public_55cd14

PROC_DECLARE(0x55cc90, internal_55cc90, public_55cc90);
extern "C" NAKED register_t __cdecl internal_55cc90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34C]
        test eax, eax
        push edi
        je public_55ccac
        push 0
        push eax
        call public_5763b0
        add esp, 8
        jmp public_55ccd4
        public_55ccac : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_55ccd4
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_55ccd4
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x26
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        public_55ccd4 : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        xor eax, eax
        test ecx, ecx
        mov ecx, dword ptr ds : [esi+4]
        sete al
        test ecx, ecx
        mov dword ptr ds : [esi+0x3A0], eax
        je public_55cd14
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        test edi, edi
        je public_55cd14
        mov eax, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x30
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        public_55cd14 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x55cc90)
    }
}

#undef public_55ccac
#undef public_55ccd4
#undef public_55cd14
