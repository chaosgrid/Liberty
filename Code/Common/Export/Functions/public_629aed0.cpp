#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629aed0);

#define public_629aef1 _public_629aef1
#define public_629af00 _public_629af00
#define public_629af0f _public_629af0f
#define public_629af22 _public_629af22
#define public_629af31 _public_629af31

PROC_DECLARE(0x629aed0, internal_629aed0, public_629aed0);
extern "C" NAKED register_t __cdecl internal_629aed0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        test al, al
        mov al, byte ptr ds : [esi+0x10]
        je public_629af0f
        test al, al
        jne public_629af00
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_629aef1
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0xB
        call dword ptr ds : [eax]
        public_629aef1 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_629af00
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xB
        call dword ptr ds : [edx]
        public_629af00 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x10], 1
        call dword ptr ds : [eax+4]
        pop esi
        ret 4
        public_629af0f : nop
        test al, al
        je public_629af31
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_629af22
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0xC
        call dword ptr ds : [eax]
        public_629af22 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_629af31
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xC
        call dword ptr ds : [edx]
        public_629af31 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x10], 0
        call dword ptr ds : [eax+4]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629aed0)
    }
}

#undef public_629aef1
#undef public_629af00
#undef public_629af0f
#undef public_629af22
#undef public_629af31
