#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a69f0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a6a02 _public_62a6a02
#define public_62a6a21 _public_62a6a21
#define public_62a6a36 _public_62a6a36

PROC_DECLARE(0x62a69f0, internal_62a69f0, public_62a69f0);
extern "C" NAKED register_t __cdecl internal_62a69f0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_62a6a36
        push esi
        public_62a6a02 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_62a6a21
        call public_62f0d50
        public_62a6a21 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_62a6a02
        pop esi
        public_62a6a36 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62a69f0)
    }
}

#undef public_62a6a02
#undef public_62a6a21
#undef public_62a6a36
