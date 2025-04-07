#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6ce90);

#define public_6f6cea6 _public_6f6cea6
#define public_6f6ceb1 _public_6f6ceb1
#define public_6f6ceb5 _public_6f6ceb5
#define public_6f6cec3 _public_6f6cec3
#define public_6f6cecf _public_6f6cecf
#define public_6f6ced1 _public_6f6ced1
#define public_6f6cedc _public_6f6cedc
#define public_6f6cef0 _public_6f6cef0
#define public_6f6cf06 _public_6f6cf06
#define public_6f6cf08 _public_6f6cf08

PROC_DECLARE(0x6f6ce90, internal_6f6ce90, public_6f6ce90);
extern "C" NAKED register_t __cdecl internal_6f6ce90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd1cac]
        mov ecx, dword ptr ds : [public_6fd1cb0]
        cmp eax, ecx
        push esi
        je public_6f6ceb1
        mov edx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx]
        public_6f6cea6 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6ceb5
        add eax, 0x14
        cmp eax, ecx
        jne public_6f6cea6
        public_6f6ceb1 : nop
        xor al, al
        pop esi
        ret 
        public_6f6ceb5 : nop
        cmp eax, ecx
        je public_6f6ceb1
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        je public_6f6cecf
        public_6f6cec3 : nop
        cmp dword ptr ds : [ecx], 0
        je public_6f6ced1
        add ecx, 4
        cmp ecx, edx
        jne public_6f6cec3
        public_6f6cecf : nop
        mov ecx, edx
        public_6f6ced1 : nop
        mov esi, dword ptr ds : [eax+0xC]
        cmp ecx, esi
        je public_6f6cedc
        mov al, 1
        pop esi
        ret 
        public_6f6cedc : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        cmp ecx, eax
        je public_6f6cf08
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        lea esp, ss:[esp]
        public_6f6cef0 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f6cf06
        add ecx, 4
        cmp ecx, eax
        jne public_6f6cef0
        xor ecx, ecx
        cmp eax, esi
        setne cl
        mov al, cl
        pop esi
        ret 
        public_6f6cf06 : nop
        mov eax, ecx
        public_6f6cf08 : nop
        xor ecx, ecx
        cmp eax, esi
        setne cl
        mov al, cl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f6ce90)
    }
}

#undef public_6f6cea6
#undef public_6f6ceb1
#undef public_6f6ceb5
#undef public_6f6cec3
#undef public_6f6cecf
#undef public_6f6ced1
#undef public_6f6cedc
#undef public_6f6cef0
#undef public_6f6cf06
#undef public_6f6cf08
