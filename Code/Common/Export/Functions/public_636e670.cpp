#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e670);

#define public_636e68c _public_636e68c
#define public_636e694 _public_636e694
#define public_636e6a4 _public_636e6a4
#define public_636e6b2 _public_636e6b2
#define public_636e6c4 _public_636e6c4
#define public_636e6cb _public_636e6cb

PROC_DECLARE(0x636e670, internal_636e670, public_636e670);
extern "C" NAKED register_t __cdecl internal_636e670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        lea edx, ds:[eax+4]
        xor edi, edi
        lea eax, ds:[ecx+4]
        public_636e68c : nop
        cmp dword ptr ds : [edx], ebx
        jne public_636e694
        inc edi
        add edx, 4
        public_636e694 : nop
        test esi, esi
        mov ecx, dword ptr ds : [eax]
        je public_636e6a4
        cmp ecx, esi
        jne public_636e6b2
        inc edi
        add eax, 4
        jmp public_636e6b2
        public_636e6a4 : nop
        cmp dword ptr ds : [edx], ecx
        je public_636e6b2
        mov esi, ecx
        inc edi
        add eax, 4
        test esi, esi
        je public_636e6c4
        public_636e6b2 : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_636e6cb
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        add edx, 4
        cmp ecx, ebp
        je public_636e68c
        public_636e6c4 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_636e6cb : nop
        cmp edi, 2
        jne public_636e6c4
        cmp dword ptr ds : [eax], 0
        jne public_636e6c4
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e670)
    }
}

#undef public_636e68c
#undef public_636e694
#undef public_636e6a4
#undef public_636e6b2
#undef public_636e6c4
#undef public_636e6cb
