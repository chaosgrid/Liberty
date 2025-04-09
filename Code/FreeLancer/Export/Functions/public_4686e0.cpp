#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb4e2);

#define public_468727 _public_468727
#define public_468776 _public_468776
#define public_4687ef _public_4687ef
#define public_46882d _public_46882d

PROC_DECLARE(0x4686e0, internal_4686e0, public_4686e0);
extern "C" NAKED register_t __cdecl internal_4686e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb4e2 @0x4686e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb4e2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x1C]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_46882d
        push ebx
        xor ebx, ebx
        public_468727 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x24], eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x40], 1
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], bl
        je public_468776
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_468776 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x18], eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], 2
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x3C], 3
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 2
        je public_4687ef
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        public_4687ef : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_5c6300]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], ecx
        jne public_468727
        pop ebx
        mov eax, edx
        mov ecx, dword ptr ds : [eax+0x18]
        pop edi
        inc ecx
        pop esi
        mov dword ptr ds : [eax+0x18], ecx
        pop ebp
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_46882d : nop
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ss : [esp+0x28]
        inc eax
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4686e0)
    }
}

#undef public_468727
#undef public_468776
#undef public_4687ef
#undef public_46882d
