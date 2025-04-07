#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313250);

#define public_6313260 _public_6313260
#define public_6313267 _public_6313267
#define public_6313291 _public_6313291
#define public_63132a4 _public_63132a4
#define public_63132a6 _public_63132a6
#define public_631331b _public_631331b

PROC_DECLARE(0x6313250, internal_6313250, public_6313250);
extern "C" NAKED register_t __cdecl internal_6313250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        sub esp, 8
        xor edx, edx
        test eax, eax
        je public_6313267
        public_6313260 : nop
        mov eax, dword ptr ds : [eax]
        inc edx
        test eax, eax
        jne public_6313260
        public_6313267 : nop
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx+0x10]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov edx, 4
        mov ebp, 0xFFFFFFFC
        add esi, ebp
        add edi, edx
        mov dword ptr ds : [ecx+0xC], esi
        add eax, edx
        mov dword ptr ds : [ecx+8], edi
        xor esi, esi
        public_6313291 : nop
        test esi, esi
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+0x10], eax
        jne public_63132a4
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+4]
        jmp public_63132a6
        public_63132a4 : nop
        mov esi, dword ptr ds : [esi]
        public_63132a6 : nop
        test esi, esi
        je public_631331b
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], edi
        mov ebx, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ecx+8]
        add ebx, ebp
        mov dword ptr ds : [ecx+0xC], ebx
        add dword ptr ds : [ecx+0x10], edx
        add edi, edx
        mov dword ptr ds : [ecx+8], edi
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ecx+8]
        add ebx, ebp
        mov dword ptr ds : [ecx+0xC], ebx
        add dword ptr ds : [ecx+0x10], edx
        add edi, edx
        mov dword ptr ds : [ecx+8], edi
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebx
        add dword ptr ds : [ecx+0xC], ebp
        mov ebx, dword ptr ds : [ecx+0x10]
        add edi, edx
        mov dword ptr ds : [ecx+8], edi
        add ebx, edx
        mov dword ptr ds : [ecx+0x10], ebx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0x10]
        add ebx, edx
        add edi, ebp
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], edi
        add eax, edx
        jmp public_6313291
        public_631331b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6313250)
    }
}

#undef public_6313260
#undef public_6313267
#undef public_6313291
#undef public_63132a4
#undef public_63132a6
#undef public_631331b
