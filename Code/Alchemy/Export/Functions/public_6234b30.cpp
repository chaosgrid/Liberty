#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bd70);
CLANG_FORWARD_PROC_SYMBOL(public_620d690);
CLANG_FORWARD_PROC_SYMBOL(public_6233fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6233fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6234b30);
CLANG_FORWARD_JUMP_SYMBOL(public_6249d20);

#define public_6234b69 _public_6234b69
#define public_6234b86 _public_6234b86
#define public_6234b9a _public_6234b9a
#define public_6234bbd _public_6234bbd
#define public_6234c06 _public_6234c06
#define public_6234c27 _public_6234c27
#define public_6234c50 _public_6234c50
#define public_6234c5c _public_6234c5c

PROC_DECLARE(0x6234b30, internal_6234b30, public_6234b30);
extern "C" NAKED register_t __cdecl internal_6234b30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249d20 @0x6234b32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249d20
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push edi
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6234c5c
        lea eax, ds:[edi+4]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], eax
        public_6234b69 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_6234bbd
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, ebp
        je public_6234b9a
        mov ebx, edi
        sub ebx, eax
        public_6234b86 : nop
        push esi
        lea ecx, ds:[ebx+esi]
        call public_620d690
        add esi, 4
        cmp esi, ebp
        jne public_6234b86
        mov ebx, dword ptr ss : [esp+0x3C]
        public_6234b9a : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, ebx
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_620bd70
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0xFFFFFFFC
        mov edx, eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], edx
        jmp public_6234c50
        public_6234bbd : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        mov ebp, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6233fe0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x20], eax
        call public_6233fc0
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x2C], 1
        cmp eax, esi
        je public_6234c27
        public_6234c06 : nop
        mov ecx, dword ptr ds : [edi]
        lea ebp, ds:[eax+0x24]
        add eax, 0xC
        push ebp
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA4]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        jne public_6234c06
        public_6234c27 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xA0]
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 4
        add eax, 4
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        public_6234c50 : nop
        cmp edi, dword ptr ss : [esp+0x18]
        jne public_6234b69
        pop esi
        pop ebp
        public_6234c5c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6234b30)
    }
}

#undef public_6234b69
#undef public_6234b86
#undef public_6234b9a
#undef public_6234bbd
#undef public_6234c06
#undef public_6234c27
#undef public_6234c50
#undef public_6234c5c
