#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f221d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faddc1);

#define public_6f222b0 _public_6f222b0
#define public_6f222cd _public_6f222cd
#define public_6f222e4 _public_6f222e4
#define public_6f222fb _public_6f222fb
#define public_6f22318 _public_6f22318

PROC_DECLARE(0x6f221d0, internal_6f221d0, public_6f221d0);
extern "C" NAKED register_t __cdecl internal_6f221d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faddc1 @0x6f221d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faddc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        je public_6f22318
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov ecx, 0xD
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x34], eax
        mov ecx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], ecx
        lea esi, ss:[ebp+0x3C]
        lea edi, ds:[ebx+0x3C]
        mov ecx, 0x1A
        rep movsd
        lea esi, ss:[ebp+0xA4]
        lea edi, ds:[ebx+0xA4]
        mov ecx, 0xD
        rep movsd
        lea edx, ss:[ebp+0xD8]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0xD8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ss : [ebp+0xE4]
        mov byte ptr ds : [ebx+0xE4], al
        mov ecx, dword ptr ss : [ebp+0xE8]
        mov dword ptr ds : [ebx+0xE8], ecx
        mov dl, byte ptr ss : [ebp+0xEC]
        push 0xC
        mov byte ptr ds : [ebx+0xEC], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0xF0], eax
        mov dword ptr ds : [ebx+0xF4], 0
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f222fb
        public_6f222b0 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x30], eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6f222cd
        mov ecx, eax
        public_6f222cd : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f222e4
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_6f222e4 : nop
        mov ecx, dword ptr ds : [ebx+0xF4]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0xF4], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6f222b0
        public_6f222fb : nop
        mov ax, word ptr ss : [ebp+0xF8]
        pop edi
        mov word ptr ds : [ebx+0xF8], ax
        mov cl, byte ptr ss : [ebp+0xFA]
        pop esi
        mov byte ptr ds : [ebx+0xFA], cl
        pop ebp
        public_6f22318 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f221d0)
    }
}

#undef public_6f222b0
#undef public_6f222cd
#undef public_6f222e4
#undef public_6f222fb
#undef public_6f22318
