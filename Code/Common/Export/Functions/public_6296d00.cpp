#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6292800);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393810);

#define public_6296e79 _public_6296e79

PROC_DECLARE(0x6296d00, internal_6296d00, public_6296d00);
extern "C" NAKED register_t __cdecl internal_6296d00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393810 @0x6296d02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393810
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        call public_6292800
        mov eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0x28], eax
        mov ecx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x2C], ecx
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x30], edx
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x34], eax
        mov cl, byte ptr ss : [ebp+0x38]
        mov byte ptr ds : [ebx+0x38], cl
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], edx
        lea eax, ss:[ebp+0x40]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x40]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ebx], offset public_639c61c
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], ecx
        mov edx, dword ptr ss : [ebp+0x50]
        lea esi, ss:[ebp+0x54]
        lea edi, ds:[ebx+0x54]
        mov ecx, 0x68
        mov dword ptr ds : [ebx+0x50], edx
        rep movsd
        mov dword ptr ds : [ebx], offset public_639cee4
        mov eax, dword ptr ss : [ebp+0x1F8]
        mov dword ptr ds : [ebx+0x1F8], eax
        mov ecx, dword ptr ss : [ebp+0x1FC]
        mov dword ptr ds : [ebx+0x1FC], ecx
        mov al, byte ptr ss : [ebp+0x200]
        mov byte ptr ds : [ebx+0x200], al
        mov ecx, dword ptr ss : [ebp+0x204]
        mov dword ptr ds : [ebx+0x204], ecx
        mov eax, dword ptr ss : [ebp+0x208]
        mov dword ptr ds : [ebx+0x208], eax
        mov cl, byte ptr ss : [ebp+0x20C]
        mov byte ptr ds : [ebx+0x20C], cl
        mov eax, offset public_639d200
        mov dword ptr ds : [ebx+0x1F4], eax
        mov ecx, dword ptr ss : [ebp+0x214]
        mov dword ptr ds : [ebx+0x214], ecx
        mov ecx, dword ptr ss : [ebp+0x218]
        mov dword ptr ds : [ebx+0x218], ecx
        mov cl, byte ptr ss : [ebp+0x21C]
        mov byte ptr ds : [ebx+0x21C], cl
        mov ecx, dword ptr ss : [ebp+0x220]
        mov dword ptr ds : [ebx+0x220], ecx
        mov ecx, dword ptr ss : [ebp+0x224]
        mov dword ptr ds : [ebx+0x224], ecx
        mov cl, byte ptr ss : [ebp+0x228]
        mov byte ptr ds : [ebx+0x228], cl
        mov dword ptr ds : [ebx+0x210], eax
        lea esi, ss:[ebp+0x22C]
        lea edi, ds:[ebx+0x22C]
        mov ecx, 9
        rep movsd
        xor edx, edx
        lea ecx, ds:[ebx+0x250]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp+0x250]
        mov byte ptr ss : [esp+0x1C], 1
        cmp eax, edx
        je public_6296e79
        add eax, 0xFFFFFF64
        cmp eax, edx
        je public_6296e79
        add eax, 0x9C
        cmp eax, edx
        je public_6296e79
        push eax
        call public_6341610
        public_6296e79 : nop
        mov dx, word ptr ss : [ebp+0x258]
        mov word ptr ds : [ebx+0x258], dx
        lea eax, ss:[ebp+0x25C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x25C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x268]
        pop edi
        mov dword ptr ds : [ebx+0x268], ecx
        mov edx, dword ptr ss : [ebp+0x26C]
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [ebx+0x26C], edx
        mov dword ptr ds : [ebx], offset public_639d13c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6296d00)
    }
}

#undef public_6296e79
