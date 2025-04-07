#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f0df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93640);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad01f);

#define public_6f08256 _public_6f08256
#define public_6f08370 _public_6f08370

PROC_DECLARE(0x6f08140, internal_6f08140, public_6f08140);
extern "C" NAKED register_t __cdecl internal_6f08140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad01f @0x6f08142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad01f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push 0x1B0
        mov ebp, ecx
        call public_6fa912a
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebx
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6f08370
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx], offset public_6fb43f8
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ds : [ebx+0xC], ecx
        mov dl, byte ptr ss : [ebp+0x10]
        push edi
        mov dword ptr ds : [ebx], offset public_6fb8240
        lea esi, ss:[ebp+0x14]
        lea edi, ds:[ebx+0x14]
        mov ecx, 0x41
        mov byte ptr ds : [ebx+0x10], dl
        rep movsd
        mov dword ptr ds : [ebx], offset public_6fb827c
        lea ecx, ss:[ebp+0x118]
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x118]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[ebp+0x124]
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[ebx+0x124]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [ebp+0x130]
        mov dword ptr ds : [ebx+0x130], ecx
        lea esi, ss:[ebp+0x134]
        lea edi, ds:[ebx+0x134]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ss : [ebp+0x168]
        mov dword ptr ds : [ebx+0x168], edx
        mov cl, byte ptr ss : [ebp+0x16C]
        mov byte ptr ds : [ebx+0x16C], cl
        mov dl, byte ptr ss : [ebp+0x16D]
        mov byte ptr ds : [ebx+0x16D], dl
        mov cl, byte ptr ss : [ebp+0x16E]
        mov byte ptr ds : [ebx+0x16E], cl
        mov ecx, dword ptr ss : [ebp+0x170]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ds : [ebx+0x170], ecx
        je public_6f08256
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f08256 : nop
        mov eax, dword ptr ss : [ebp+0x174]
        mov dword ptr ds : [ebx+0x174], eax
        mov ecx, dword ptr ss : [ebp+0x178]
        mov dword ptr ds : [ebx+0x178], ecx
        mov edx, dword ptr ss : [ebp+0x17C]
        mov dword ptr ds : [ebx+0x17C], edx
        mov al, byte ptr ss : [ebp+0x180]
        lea esi, ds:[ebx+0x180]
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 2
        mov byte ptr ds : [esi], al
        call public_6f93640
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ss : [ebp+0x184]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6f0df30
        lea eax, ss:[ebp+0x18C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x18C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x198]
        mov dword ptr ds : [ebx+0x198], ecx
        mov edx, dword ptr ss : [ebp+0x19C]
        mov dword ptr ds : [ebx+0x19C], edx
        mov al, byte ptr ss : [ebp+0x1A0]
        lea esi, ds:[ebx+0x1A0]
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 3
        mov byte ptr ds : [esi], al
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ss : [ebp+0x1A4]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6ed0230
        mov al, byte ptr ss : [ebp+0x1AC]
        mov byte ptr ds : [ebx+0x1AC], al
        mov cl, byte ptr ss : [ebp+0x1AD]
        pop edi
        mov byte ptr ds : [ebx+0x1AD], cl
        mov dword ptr ds : [ebx], offset public_6fb8404
        mov eax, ebx
        pop esi
        public_6f08370 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f08140)
    }
}

#undef public_6f08256
#undef public_6f08370
