#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65dafe8);

#define public_65db005 _public_65db005
#define public_65db01f _public_65db01f
#define public_65db022 _public_65db022
#define public_65db05e _public_65db05e
#define public_65db061 _public_65db061
#define public_65db087 _public_65db087
#define public_65db090 _public_65db090
#define public_65db09a _public_65db09a
#define public_65db0ee _public_65db0ee

PROC_DECLARE(0x65dafe8, internal_65dafe8, public_65dafe8);
extern "C" NAKED register_t __cdecl internal_65dafe8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        call public_65d8f61
        test esi, esi
        mov edi, eax
        jge public_65db005
        xor eax, eax
        jmp public_65db0ee
        public_65db005 : nop
        cmp dword ptr ds : [edi+0x40], 0
        jne public_65db01f
        push 0x24
        call public_65d8535
        pop ecx
        mov dword ptr ds : [edi+0x40], eax
        test eax, eax
        mov ecx, offset public_65e6238
        je public_65db022
        public_65db01f : nop
        mov ecx, dword ptr ds : [edi+0x40]
        public_65db022 : nop
        mov eax, esi
        mov edi, 0x7861F80
        cdq 
        idiv edi
        mov edx, eax
        imul edx, 0xF879E080
        add esi, edx
        lea edx, ds:[eax*4+0x46]
        mov eax, 0x1E13380
        cmp esi, eax
        jl public_65db061
        sub esi, eax
        inc edx
        cmp esi, eax
        jl public_65db061
        sub esi, eax
        mov eax, 0x1E28500
        inc edx
        cmp esi, eax
        jl public_65db05e
        inc edx
        sub esi, eax
        jmp public_65db061
        public_65db05e : nop
        push 1
        pop ebx
        public_65db061 : nop
        mov eax, esi
        mov dword ptr ds : [ecx+0x14], edx
        cdq 
        mov edi, 0x15180
        idiv edi
        mov edi, offset public_65e5bf0
        mov dword ptr ds : [ecx+0x1C], eax
        imul eax, 0xFFFEAE80
        add esi, eax
        test ebx, ebx
        jne public_65db087
        mov edi, offset public_65e5c24
        public_65db087 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        push 1
        pop eax
        lea ebx, ds:[edi+4]
        public_65db090 : nop
        cmp dword ptr ds : [ebx], edx
        jge public_65db09a
        inc eax
        add ebx, 4
        jmp public_65db090
        public_65db09a : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        dec eax
        mov dword ptr ds : [ecx+0x10], eax
        push 7
        sub edx, dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, 0x15180
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [eax]
        cdq 
        idiv edi
        pop edi
        push 0x3C
        add eax, 4
        cdq 
        idiv edi
        mov eax, esi
        mov edi, 0xE10
        mov dword ptr ds : [ecx+0x18], edx
        cdq 
        idiv edi
        pop edi
        mov dword ptr ds : [ecx+8], eax
        imul eax, 0xFFFFF1F0
        add esi, eax
        mov eax, esi
        cdq 
        idiv edi
        mov dword ptr ds : [ecx+4], eax
        imul eax, 0x3C
        sub esi, eax
        and dword ptr ds : [ecx+0x20], 0
        mov dword ptr ds : [ecx], esi
        mov eax, ecx
        public_65db0ee : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65dafe8)
    }
}

#undef public_65db005
#undef public_65db01f
#undef public_65db022
#undef public_65db05e
#undef public_65db061
#undef public_65db087
#undef public_65db090
#undef public_65db09a
#undef public_65db0ee
