#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_590b40);
CLANG_FORWARD_PROC_SYMBOL(public_591420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4924);

#define public_590bbf _public_590bbf
#define public_590bd4 _public_590bd4
#define public_590bdb _public_590bdb
#define public_590bf9 _public_590bf9
#define public_590c46 _public_590c46
#define public_590c65 _public_590c65
#define public_590c6d _public_590c6d
#define public_590c73 _public_590c73
#define public_590cf7 _public_590cf7

PROC_DECLARE(0x590b40, internal_590b40, public_590b40);
extern "C" NAKED register_t __cdecl internal_590b40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4924 @0x590b42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4924
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ebx
        xor ecx, ecx
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_590cf7
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ecx
        push edi
        je public_590bf9
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea edi, ds:[eax+1]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jbe public_590bdb
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_590bbf
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [ebx+8], eax
        jmp public_590bd4
        public_590bbf : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [ebx+8], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_590bd4 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+0xC], edi
        public_590bdb : nop
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 0xC
        mov word ptr ds : [ecx+edx*2], 0
        xor ecx, ecx
        public_590bf9 : nop
        lea edi, ds:[ebx+0x10]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x2C], eax
        je public_590c46
        push eax
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        add esp, 4
        lea eax, ss:[ebp+1]
        push eax
        mov ecx, edi
        call public_4142a0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi]
        push ebp
        push ecx
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ds : [edi]
        add esp, 0xC
        mov word ptr ds : [eax+ebp*2], 0
        public_590c46 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+8], ecx
        mov dl, byte ptr ds : [esi+0x1C]
        lea ebp, ds:[edi+0xC]
        mov byte ptr ss : [ebp], dl
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 2
        jne public_590c65
        xor eax, eax
        jmp public_590c6d
        public_590c65 : nop
        mov eax, dword ptr ds : [esi+0x24]
        sub eax, ecx
        sar eax, 3
        public_590c6d : nop
        test eax, eax
        jge public_590c73
        xor eax, eax
        public_590c73 : nop
        shl eax, 3
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x20]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_591420
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+0x1C], ecx
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x24], eax
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x2C], edx
        mov al, byte ptr ds : [esi+0x40]
        mov byte ptr ds : [edi+0x30], al
        mov ecx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [ebx+0x44], ecx
        lea edx, ds:[esi+0x48]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x48]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[esi+0x54]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x54]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [esi+0x60]
        pop esi
        mov byte ptr ds : [ebx+0x60], cl
        pop ebp
        public_590cf7 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x590b40)
    }
}

#undef public_590bbf
#undef public_590bd4
#undef public_590bdb
#undef public_590bf9
#undef public_590c46
#undef public_590c65
#undef public_590c6d
#undef public_590c73
#undef public_590cf7
