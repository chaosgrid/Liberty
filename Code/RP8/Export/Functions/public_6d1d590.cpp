#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1d590);

#define public_6d1d5b4 _public_6d1d5b4
#define public_6d1d5cb _public_6d1d5cb
#define public_6d1d5d5 _public_6d1d5d5
#define public_6d1d5f7 _public_6d1d5f7
#define public_6d1d60c _public_6d1d60c

PROC_DECLARE(0x6d1d590, internal_6d1d590, public_6d1d590);
extern "C" NAKED register_t __cdecl internal_6d1d590()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx+0x35]
        test eax, eax
        jne public_6d1d5d5
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-8], eax
        public_6d1d5b4 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        movsx eax, byte ptr ds : [edx+0x35]
        test eax, eax
        jne public_6d1d5cb
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d1d5b4
        public_6d1d5cb : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1d60c
        public_6d1d5d5 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1d5f7
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        jmp public_6d1d5d5
        public_6d1d5f7 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-4]
        je public_6d1d60c
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d1d60c : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1d590)
    }
}

#undef public_6d1d5b4
#undef public_6d1d5cb
#undef public_6d1d5d5
#undef public_6d1d5f7
#undef public_6d1d60c
