#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355770);

#define public_635578a _public_635578a
#define public_6355798 _public_6355798
#define public_63557a1 _public_63557a1
#define public_63557a9 _public_63557a9
#define public_63557ab _public_63557ab

PROC_DECLARE(0x6355770, internal_6355770, public_6355770);
extern "C" NAKED register_t __cdecl internal_6355770()
{
    __asm
    {
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x36]
        push ebx
        push esi
        push edi
        dec edx
        js public_63557a9
        mov eax, dword ptr ds : [ecx+0x38]
        mov ebx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+edx*4]
        public_635578a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x28]
        cmp ecx, edi
        je public_6355798
        cmp dword ptr ds : [eax+0x2C], edi
        jne public_63557a1
        public_6355798 : nop
        cmp ecx, ebx
        je public_63557ab
        cmp dword ptr ds : [eax+0x2C], ebx
        je public_63557ab
        public_63557a1 : nop
        dec edx
        sub esi, 4
        test edx, edx
        jge public_635578a
        public_63557a9 : nop
        xor eax, eax
        public_63557ab : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6355770)
    }
}

#undef public_635578a
#undef public_6355798
#undef public_63557a1
#undef public_63557a9
#undef public_63557ab
