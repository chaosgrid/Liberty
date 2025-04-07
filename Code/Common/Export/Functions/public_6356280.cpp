#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356280);

#define public_635629a _public_635629a
#define public_63562a8 _public_63562a8
#define public_63562b1 _public_63562b1
#define public_63562b9 _public_63562b9
#define public_63562bb _public_63562bb

PROC_DECLARE(0x6356280, internal_6356280, public_6356280);
extern "C" NAKED register_t __cdecl internal_6356280()
{
    __asm
    {
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x36]
        push ebx
        push esi
        push edi
        dec edx
        js public_63562b9
        mov eax, dword ptr ds : [ecx+0x38]
        mov ebx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+edx*4]
        public_635629a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x28]
        cmp ecx, edi
        jne public_63562a8
        cmp dword ptr ds : [eax+0x2C], ebx
        je public_63562bb
        public_63562a8 : nop
        cmp ecx, ebx
        jne public_63562b1
        cmp dword ptr ds : [eax+0x2C], edi
        je public_63562bb
        public_63562b1 : nop
        dec edx
        sub esi, 4
        test edx, edx
        jge public_635629a
        public_63562b9 : nop
        xor eax, eax
        public_63562bb : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6356280)
    }
}

#undef public_635629a
#undef public_63562a8
#undef public_63562b1
#undef public_63562b9
#undef public_63562bb
