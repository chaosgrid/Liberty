#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbd20);

#define public_62bbd57 _public_62bbd57
#define public_62bbd66 _public_62bbd66

PROC_DECLARE(0x62bbd20, internal_62bbd20, public_62bbd20);
extern "C" NAKED register_t __cdecl internal_62bbd20()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0x4A742400
        mov dword ptr ds : [eax+0x18], 0x48742400
        mov dword ptr ds : [eax], offset public_639dce0
        mov edx, dword ptr ds : [eax+8]
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        mov ecx, esi
        cmp ecx, esi
        je public_62bbd66
        push edi
        public_62bbd57 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        add ecx, 4
        add edx, 4
        cmp ecx, esi
        jne public_62bbd57
        pop edi
        public_62bbd66 : nop
        mov dword ptr ds : [eax+0xC], edx
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62bbd20)
    }
}

#undef public_62bbd57
#undef public_62bbd66
