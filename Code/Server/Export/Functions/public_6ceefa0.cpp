#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60789);

#define public_6cef036 _public_6cef036
#define public_6cef04c _public_6cef04c
#define public_6cef070 _public_6cef070
#define public_6cef08c _public_6cef08c
#define public_6cef097 _public_6cef097

PROC_DECLARE(0x6ceefa0, internal_6ceefa0, public_6ceefa0);
extern "C" NAKED register_t __cdecl internal_6ceefa0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60789 @0x6ceefa8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60789
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        xor ebx, ebx
        cmp al, bl
        mov ebp, ecx
        mov byte ptr ss : [ebp+0x41], al
        jne public_6cef097
        cmp dword ptr ss : [ebp+0x4C], ebx
        je public_6cef097
        mov al, byte ptr ss : [ebp+0x44]
        push esi
        lea esi, ss:[ebp+0x44]
        push edi
        push 0x14
        mov byte ptr ss : [esp+0x14], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d64380]
        mov cl, byte ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov byte ptr ss : [esp+0x1C], cl
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x34], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6cef04c
        public_6cef036 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d641e8]
        cmp edi, ebx
        jne public_6cef036
        public_6cef04c : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov edi, eax
        je public_6cef08c
        public_6cef070 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641e8]
        cmp esi, edi
        jne public_6cef070
        mov eax, dword ptr ss : [esp+0x14]
        public_6cef08c : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop esi
        public_6cef097 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6ceefa0)
    }
}

#undef public_6cef036
#undef public_6cef04c
#undef public_6cef070
#undef public_6cef08c
#undef public_6cef097
