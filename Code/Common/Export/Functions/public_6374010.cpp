#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6373fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6374010);

#define public_6374059 _public_6374059
#define public_637405f _public_637405f
#define public_637407f _public_637407f
#define public_6374085 _public_6374085
#define public_637409b _public_637409b
#define public_63740a4 _public_63740a4
#define public_63740b7 _public_63740b7
#define public_63740cb _public_63740cb
#define public_63740de _public_63740de
#define public_63740f2 _public_63740f2
#define public_63740fd _public_63740fd

PROC_DECLARE(0x6374010, internal_6374010, public_6374010);
extern "C" NAKED register_t __cdecl internal_6374010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b8fc]
        push ebx
        push esi
        push edi
        push eax
        call public_636ec10
        mov ebx, dword ptr ds : [public_658b254]
        mov esi, eax
        add esi, ebx
        push esi
        call public_636ec70
        push esi
        mov ebx, eax
        push 0
        push ebx
        call public_636eed0
        mov ecx, dword ptr ds : [public_658b8e4]
        mov esi, dword ptr ds : [public_658b810]
        add esp, 0x14
        inc ecx
        test esi, esi
        mov dword ptr ds : [public_658b8e4], ecx
        je public_63740fd
        jmp public_637405f
        public_6374059 : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        public_637405f : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63740fd
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        je public_63740a4
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        je public_63740a4
        jmp public_6374085
        public_637407f : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        public_6374085 : nop
        cmp dword ptr ds : [eax+0x10], ecx
        je public_637409b
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ds : [eax+8]
        push esi
        push ecx
        push ebx
        call public_6373fa0
        add esp, 0xC
        public_637409b : nop
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        jne public_637407f
        public_63740a4 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_63740cb
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        je public_63740cb
        public_63740b7 : nop
        push esi
        push eax
        push ebx
        call public_6373fa0
        mov eax, dword ptr ds : [edi]
        add esp, 0xC
        add edi, 4
        test eax, eax
        jne public_63740b7
        public_63740cb : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_63740f2
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        je public_63740f2
        public_63740de : nop
        push esi
        push eax
        push ebx
        call public_6373fa0
        mov eax, dword ptr ds : [edi]
        add esp, 0xC
        add edi, 4
        test eax, eax
        jne public_63740de
        public_63740f2 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6374059
        public_63740fd : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6374010)
    }
}

#undef public_6374059
#undef public_637405f
#undef public_637407f
#undef public_6374085
#undef public_637409b
#undef public_63740a4
#undef public_63740b7
#undef public_63740cb
#undef public_63740de
#undef public_63740f2
#undef public_63740fd
