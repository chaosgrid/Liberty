#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6303250);
CLANG_FORWARD_PROC_SYMBOL(public_631ff70);

#define public_631ff94 _public_631ff94
#define public_631ffbd _public_631ffbd
#define public_631ffdf _public_631ffdf
#define public_631ffe7 _public_631ffe7
#define public_631ffeb _public_631ffeb
#define public_631fffa _public_631fffa
#define public_6320014 _public_6320014
#define public_6320021 _public_6320021
#define public_6320026 _public_6320026
#define public_6320040 _public_6320040
#define public_632004d _public_632004d
#define public_6320050 _public_6320050

PROC_DECLARE(0x631ff70, internal_631ff70, public_631ff70);
extern "C" NAKED register_t __cdecl internal_631ff70()
{
    __asm
    {
        push ecx
        mov dword ptr ss : [esp], 0
        call public_6303220
        test al, al
        jne public_631ff94
        call public_6303250
        test al, al
        jne public_631ff94
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        pop ecx
        ret 
        public_631ff94 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], ecx
        je public_631ffdf
        cmp ecx, 0xFFFFFFFF
        je public_631ffdf
        cmp dword ptr ds : [ebx], ecx
        jne public_631ffbd
        fld dword ptr ds : [public_639a1d0]
        jmp public_631ffeb
        public_631ffbd : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        lea esi, ds:[eax+0x20]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_6301640
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        je public_631ffe7
        fld dword ptr ds : [eax+0x10]
        jmp public_631ffeb
        public_631ffdf : nop
        fld dword ptr ds : [public_6399408]
        jmp public_631ffeb
        public_631ffe7 : nop
        fld dword ptr ss : [esp+0xC]
        public_631ffeb : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_631fffa
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_631fffa : nop
        mov edx, dword ptr ds : [ebx]
        fld dword ptr ds : [public_6399408]
        cmp edx, 0xFFFFFFFF
        je public_6320026
        mov eax, dword ptr ds : [edi+0x7C]
        mov ecx, dword ptr ds : [edi+0x80]
        cmp eax, ecx
        je public_6320026
        public_6320014 : nop
        cmp dword ptr ds : [eax], edx
        je public_6320021
        add eax, 8
        cmp eax, ecx
        jne public_6320014
        jmp public_6320026
        public_6320021 : nop
        fstp st(0)
        fld dword ptr ds : [eax+4]
        public_6320026 : nop
        mov eax, dword ptr ds : [ebx+0x88]
        faddp 
        test eax, eax
        pop edi
        pop esi
        pop ebx
        je public_6320050
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        nop 
        lea esp, ss:[esp]
        public_6320040 : nop
        cmp dword ptr ds : [eax+4], ecx
        je public_632004d
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6320040
        pop ecx
        ret 
        public_632004d : nop
        fadd dword ptr ds : [eax+8]
        public_6320050 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x631ff70)
    }
}

#undef public_631ff94
#undef public_631ffbd
#undef public_631ffdf
#undef public_631ffe7
#undef public_631ffeb
#undef public_631fffa
#undef public_6320014
#undef public_6320021
#undef public_6320026
#undef public_6320040
#undef public_632004d
#undef public_6320050
