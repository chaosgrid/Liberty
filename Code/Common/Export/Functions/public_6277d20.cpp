#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_6277d90 _public_6277d90
#define public_6277d9e _public_6277d9e
#define public_6277da9 _public_6277da9
#define public_6277dbf _public_6277dbf

PROC_DECLARE(0x6277d20, internal_6277d20, public_6277d20);
extern "C" NAKED register_t __cdecl internal_6277d20()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x1C8]
        push esi
        call public_6334430
        xor edx, edx
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], edx
        mov ebx, edx
        mov ecx, eax
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        add esp, 4
        mov dword ptr ds : [esi+0x34], 0x420C0000
        mov dword ptr ds : [esi+0x38], 0x3E800000
        mov dword ptr ds : [esi+0x3C], 0x49742400
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6277d90 : nop
        mov ecx, dword ptr ds : [edi+0x1A8]
        cmp ecx, edx
        jne public_6277d9e
        xor eax, eax
        jmp public_6277da9
        public_6277d9e : nop
        mov eax, dword ptr ds : [edi+0x1AC]
        sub eax, ecx
        sar eax, 2
        public_6277da9 : nop
        cmp esi, eax
        jge public_6277dbf
        mov eax, dword ptr ds : [edi+0x1A8]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov dword ptr ds : [ecx+0xE28], edx
        inc esi
        jmp public_6277d90
        public_6277dbf : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6277d20)
    }
}

#undef public_6277d90
#undef public_6277d9e
#undef public_6277da9
#undef public_6277dbf
