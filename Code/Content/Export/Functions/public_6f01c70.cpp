#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f03520);
CLANG_FORWARD_PROC_SYMBOL(public_6f03b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f30820);

#define public_6f01c84 _public_6f01c84
#define public_6f01c90 _public_6f01c90
#define public_6f01ca0 _public_6f01ca0
#define public_6f01cb0 _public_6f01cb0
#define public_6f01cc6 _public_6f01cc6
#define public_6f01cd3 _public_6f01cd3
#define public_6f01d06 _public_6f01d06
#define public_6f01d18 _public_6f01d18
#define public_6f01d30 _public_6f01d30

PROC_DECLARE(0x6f01c70, internal_6f01c70, public_6f01c70);
extern "C" NAKED register_t __cdecl internal_6f01c70()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov eax, offset public_6fcf480
        mov dword ptr ss : [esp+0x1C], 0x42
        public_6f01c84 : nop
        mov dword ptr ss : [esp+0x18], 2
        lea esp, ss:[esp]
        public_6f01c90 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 2
        lea esp, ss:[esp]
        public_6f01ca0 : nop
        mov edi, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax-4]
        mov esi, edi
        cmp esi, edi
        je public_6f01cc6
        nop 
        lea esp, ss:[esp]
        public_6f01cb0 : nop
        push 0xFFFFFFFF
        push 0
        push esi
        mov ecx, ebp
        call public_6f03b80
        add esi, 0x10
        add ebp, 0x10
        cmp esi, edi
        jne public_6f01cb0
        public_6f01cc6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax]
        cmp ebp, ebx
        je public_6f01d30
        lea esi, ss:[ebp+4]
        public_6f01cd3 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f01d18
        lea edi, ds:[esi-4]
        push eax
        mov ecx, edi
        call public_6f03520
        cmp byte ptr ds : [eax], 0
        je public_6f01d06
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6f03520
        cmp byte ptr ds : [eax], 0xFF
        je public_6f01d06
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, edi
        call public_6f03520
        dec byte ptr ds : [eax]
        jmp public_6f01d18
        public_6f01d06 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        add edx, 2
        push edx
        dec eax
        push eax
        mov ecx, edi
        call public_6f30820
        public_6f01d18 : nop
        xor eax, eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        add esi, 0x10
        lea ecx, ds:[esi-4]
        cmp ecx, ebx
        jne public_6f01cd3
        mov eax, dword ptr ss : [esp+0x10]
        public_6f01d30 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ebp
        add eax, 0x10
        dec ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6f01ca0
        dec dword ptr ss : [esp+0x18]
        jne public_6f01c90
        dec dword ptr ss : [esp+0x1C]
        jne public_6f01c84
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f01c70)
    }
}

#undef public_6f01c84
#undef public_6f01c90
#undef public_6f01ca0
#undef public_6f01cb0
#undef public_6f01cc6
#undef public_6f01cd3
#undef public_6f01d06
#undef public_6f01d18
#undef public_6f01d30
