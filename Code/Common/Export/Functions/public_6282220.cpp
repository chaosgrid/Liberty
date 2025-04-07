#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6282236 _public_6282236
#define public_628224b _public_628224b
#define public_628226f _public_628226f
#define public_6282283 _public_6282283

PROC_DECLARE(0x6282220, internal_6282220, public_6282220);
extern "C" NAKED register_t __cdecl internal_6282220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_6282283
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6282236 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_628224b
        mov esi, eax
        public_628224b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_628226f
        mov edx, ebx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_628226f : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc edx
        add ebx, 0xC
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], edx
        jne public_6282236
        pop edi
        pop esi
        public_6282283 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6282220)
    }
}

#undef public_6282236
#undef public_628224b
#undef public_628226f
#undef public_6282283
