#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352220);

#define public_6352249 _public_6352249
#define public_6352279 _public_6352279

PROC_DECLARE(0x6352220, internal_6352220, public_6352220);
extern "C" NAKED register_t __cdecl internal_6352220()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        fld dword ptr ds : [edi+0x10]
        xor esi, esi
        mov si, word ptr ds : [edi+0x2E]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x14]
        public_6352249 : nop
        cmp esi, 0xFFFF
        je public_6352279
        mov eax, dword ptr ds : [edi+0x24]
        shl esi, 4
        add eax, esi
        xor esi, esi
        test eax, eax
        mov si, word ptr ds : [eax+4]
        je public_6352279
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        fadd dword ptr ds : [eax+8]
        push ebp
        push ebx
        fstp dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        jmp public_6352249
        public_6352279 : nop
        fld dword ptr ss : [esp+0x10]
        xor eax, eax
        fadd dword ptr ds : [edi+0x28]
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0x14], eax
        fstp dword ptr ds : [edi+0x28]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edi+0x18]
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6352220)
    }
}

#undef public_6352249
#undef public_6352279
