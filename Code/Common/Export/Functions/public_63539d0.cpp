#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_63539d0);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);

#define public_6353a1f _public_6353a1f
#define public_6353a8a _public_6353a8a
#define public_6353b02 _public_6353b02

PROC_DECLARE(0x63539d0, internal_63539d0, public_63539d0);
extern "C" NAKED register_t __cdecl internal_63539d0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0x14]
        shr eax, 8
        and eax, 3
        push esi
        mov esi, ecx
        lea ecx, ds:[eax*8]
        sub ecx, eax
        movsx edx, word ptr ss : [ebp+ecx*4+0x32]
        lea eax, ss:[ebp+ecx*4+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        push edi
        mov edi, dword ptr ds : [eax+0x14]
        lea eax, ds:[esi+8]
        mov ebx, esi
        sub ebx, eax
        mov dword ptr ds : [eax+8], ecx
        mov word ptr ds : [eax+0xC], bx
        mov ebx, dword ptr ds : [ecx+0x28]
        test ebx, ebx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], 0
        je public_6353a1f
        mov dword ptr ds : [ebx+4], eax
        public_6353a1f : nop
        mov dword ptr ds : [ecx+0x28], eax
        xor ecx, ecx
        mov cx, word ptr ds : [eax+0xE]
        xor ebx, ebx
        mov bl, cl
        xor bl, dl
        mov dword ptr ds : [eax+0x10], edi
        and ebx, 0xFF
        xor ebx, ecx
        mov word ptr ds : [eax+0xE], bx
        mov eax, dword ptr ss : [ebp+0x14]
        xor eax, 0x100
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        mov eax, dword ptr ss : [ebp+edx*4+0x2C]
        mov ecx, dword ptr ss : [ebp+edx*4+0x28]
        movsx ebx, word ptr ss : [ebp+edx*4+0x32]
        lea edi, ss:[ebp+edx*4+0x18]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[esi+0x1C]
        mov edx, esi
        sub edx, eax
        mov dword ptr ds : [eax+8], ecx
        mov word ptr ds : [eax+0xC], dx
        mov edx, dword ptr ds : [ecx+0x28]
        test edx, edx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], 0
        je public_6353a8a
        mov dword ptr ds : [edx+4], eax
        public_6353a8a : nop
        mov dword ptr ds : [ecx+0x28], eax
        xor ecx, ecx
        mov cx, word ptr ds : [eax+0xE]
        xor edx, edx
        mov dl, cl
        xor dl, bl
        and edx, 0xFF
        xor edx, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov word ptr ds : [eax+0xE], dx
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov dword ptr ds : [esi+0x68], ecx
        mov edx, dword ptr ds : [eax+0xFC]
        mov dword ptr ds : [esi+0x6C], edx
        cmp word ptr ds : [edi+0x1A], 2
        jne public_6353b02
        mov edi, dword ptr ds : [edi+0x14]
        mov eax, edi
        and eax, 0xFFFFFFF0
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        lea ecx, ss:[esp+0x10]
        shl edx, 4
        push ecx
        sub eax, edx
        push eax
        push edi
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call public_6347e60
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [esi+0x4C]
        public_6353b02 : nop
        mov ecx, dword ptr ds : [esi+0x60]
        xor eax, eax
        and ecx, 0xFFFFFF01
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        or ecx, 1
        mov dword ptr ds : [esi+0x60], ecx
        mov edx, dword ptr ds : [public_658ab1c]
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x70], eax
        mov eax, dword ptr ds : [esi+0x34]
        and eax, 0xFFFFFF00
        pop edi
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x58], edx
        mov word ptr ds : [esi+0x5C], 0x14
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63539d0)
    }
}

#undef public_6353a1f
#undef public_6353a8a
#undef public_6353b02
