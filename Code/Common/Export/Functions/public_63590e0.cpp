#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6355c10);
CLANG_FORWARD_PROC_SYMBOL(public_6359090);
CLANG_FORWARD_PROC_SYMBOL(public_63590e0);
CLANG_FORWARD_PROC_SYMBOL(public_6359170);

#define public_63590fa _public_63590fa
#define public_6359127 _public_6359127
#define public_635913a _public_635913a
#define public_6359163 _public_6359163
#define public_6359166 _public_6359166

PROC_DECLARE(0x63590e0, internal_63590e0, public_63590e0);
extern "C" NAKED register_t __cdecl internal_63590e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ax, word ptr ds : [edi+0xA]
        cmp ax, word ptr ds : [edi+8]
        lea esi, ds:[edi+8]
        jb public_63590fa
        mov ecx, esi
        call public_63441a0
        public_63590fa : nop
        mov edx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        xor ebx, ebx
        mov dword ptr ds : [edx+ecx*4], ebp
        inc word ptr ds : [esi+2]
        mov eax, dword ptr ss : [ebp+0x1B4]
        mov dword ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [edi+0x20]
        mov bx, word ptr ds : [ecx+0x36]
        dec ebx
        js public_6359166
        public_6359127 : nop
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edx+0x38]
        mov esi, dword ptr ds : [eax+ebx*4]
        cmp dword ptr ds : [esi+0x28], ebp
        je public_635913a
        cmp dword ptr ds : [esi+0x2C], ebp
        jne public_6359163
        public_635913a : nop
        cmp esi, dword ptr ss : [esp+0x18]
        je public_6359163
        push esi
        mov ecx, edi
        call public_6359170
        test eax, eax
        jne public_6359163
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov ecx, esi
        call public_6355c10
        test eax, eax
        jle public_6359163
        push esi
        mov ecx, edi
        call public_6359090
        public_6359163 : nop
        dec ebx
        jns public_6359127
        public_6359166 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x63590e0)
    }
}

#undef public_63590fa
#undef public_6359127
#undef public_635913a
#undef public_6359163
#undef public_6359166
