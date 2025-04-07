#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3930);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d3950 _public_65d3950
#define public_65d3959 _public_65d3959
#define public_65d3986 _public_65d3986
#define public_65d398f _public_65d398f

PROC_DECLARE(0x65d3930, internal_65d3930, public_65d3930);
extern "C" NAKED register_t __cdecl internal_65d3930()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_65d3959
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d3950
        cmp cl, 0xFF
        je public_65d3950
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d3959
        public_65d3950 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d3959 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_65d398f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d3986
        cmp cl, 0xFF
        je public_65d3986
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_65d3986 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d398f : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d3930)
    }
}

#undef public_65d3950
#undef public_65d3959
#undef public_65d3986
#undef public_65d398f
