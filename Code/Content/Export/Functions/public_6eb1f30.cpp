#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eadac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa024);

#define public_6eb1fa0 _public_6eb1fa0
#define public_6eb1fbb _public_6eb1fbb
#define public_6eb2042 _public_6eb2042

PROC_DECLARE(0x6eb1f30, internal_6eb1f30, public_6eb1f30);
extern "C" NAKED register_t __cdecl internal_6eb1f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa024 @0x6eb1f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa024
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov dword ptr ss : [esp+8], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_6eb2042
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [ebx+4]
        push ebp
        add esi, 4
        push 0x14
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        mov ebp, dword ptr ds : [ebx+8]
        mov edi, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], edx
        je public_6eb1fbb
        nop 
        lea esp, ss:[esp]
        public_6eb1fa0 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ds:[edi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6eadac0
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6eb1fa0
        public_6eb1fbb : nop
        mov al, byte ptr ds : [ebx+0x10]
        lea edi, ds:[esi+0xC]
        push 0x64
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [edi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        add esp, 4
        xor ebp, ebp
        mov dword ptr ds : [edi+8], ebp
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_6eb0fe0
        mov cl, byte ptr ds : [ebx+0x1C]
        lea edi, ds:[ebx+0x1C]
        add esi, 0x18
        push 0xC
        mov byte ptr ss : [esp+0x2C], 2
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        lea edx, ss:[esp+0x34]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        mov ebx, dword ptr ds : [edi+4]
        push edx
        mov ecx, edi
        call public_6f1df30
        mov edi, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push edx
        mov ecx, esi
        call public_6ed0230
        pop ebp
        pop ebx
        public_6eb2042 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eb1f30)
    }
}

#undef public_6eb1fa0
#undef public_6eb1fbb
#undef public_6eb2042
