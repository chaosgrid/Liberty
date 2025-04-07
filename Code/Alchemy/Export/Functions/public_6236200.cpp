#include "Alchemy-PCH.h"


#define public_6236214 _public_6236214
#define public_6236224 _public_6236224
#define public_6236232 _public_6236232
#define public_6236245 _public_6236245

PROC_DECLARE(0x6236200, internal_6236200, public_6236200);
extern "C" NAKED register_t __cdecl internal_6236200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFF28F620
        jne public_6236214
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        jmp public_6236232
        public_6236214 : nop
        cmp eax, 0x64B3B9
        jne public_6236224
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x4C]
        jmp public_6236232
        public_6236224 : nop
        cmp eax, 0xF3CF5EA5
        jne public_6236245
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x50]
        public_6236232 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6236245 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6236200)
    }
}

#undef public_6236214
#undef public_6236224
#undef public_6236232
#undef public_6236245
