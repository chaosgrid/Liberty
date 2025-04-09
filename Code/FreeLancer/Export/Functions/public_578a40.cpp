#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3bea);

#define public_578ac3 _public_578ac3
#define public_578ad8 _public_578ad8
#define public_578aef _public_578aef
#define public_578b01 _public_578b01

PROC_DECLARE(0x578a40, internal_578a40, public_578a40);
extern "C" NAKED register_t __cdecl internal_578a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3bea @0x578a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3bea
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_578b01
        mov edi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f9c]
        mov al, byte ptr ds : [edi+0x10]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x10], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], ebx
        mov ecx, dword ptr ds : [edi+0x14]
        mov edi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_578b01
        push ebp
        public_578ac3 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_578ad8
        mov ebp, eax
        public_578ad8 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_578aef
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_578aef : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [esi+0x18], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_578ac3
        pop ebp
        public_578b01 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x578a40)
    }
}

#undef public_578ac3
#undef public_578ad8
#undef public_578aef
#undef public_578b01
