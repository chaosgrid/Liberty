#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8910);
CLANG_FORWARD_PROC_SYMBOL(public_6aca920);
CLANG_FORWARD_PROC_SYMBOL(public_6acae10);

#define public_6acae43 _public_6acae43
#define public_6acaeb5 _public_6acaeb5
#define public_6acaf08 _public_6acaf08
#define public_6acaf5e _public_6acaf5e
#define public_6acaf62 _public_6acaf62
#define public_6acafc9 _public_6acafc9
#define public_6acb00f _public_6acb00f
#define public_6acb03c _public_6acb03c
#define public_6acb040 _public_6acb040
#define public_6acb04f _public_6acb04f
#define public_6acb07f _public_6acb07f

PROC_DECLARE(0x6acae10, internal_6acae10, public_6acae10);
extern "C" NAKED register_t __cdecl internal_6acae10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x1C]
        sub esp, 0x18
        mov ecx, dword ptr ds : [eax+8]
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx*4+public_6add4cc]
        test ebp, ebp
        jne public_6acae43
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x28]
        push 1
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push edx
        call ecx
        pop ebp
        add esp, 0x18
        ret 0x1C
        public_6acae43 : nop
        push ebx
        mov ebx, dword ptr ds : [eax+ebp*4+4]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], esi
        shr esi, 1
        mov dl, byte ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x34]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        sub dl, byte ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        lea eax, ds:[edi+ebx*8]
        neg dl
        sbb edx, edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ebp*4+public_6ada7fc]
        shl edx, 1
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        lea edx, ds:[eax+ebx*4]
        mov eax, dword ptr ss : [esp+0x34]
        push edx
        lea edx, ds:[eax+ebx*4]
        push edx
        call ecx
        lea eax, ss:[ebp-1]
        test eax, eax
        je public_6acaf08
        mov edx, dword ptr ss : [esp+0x44]
        sub ebp, eax
        lea ecx, ds:[eax+1]
        lea ebx, ds : [eax*4+public_6ada7fc]
        mov dword ptr ss : [esp+0x34], ecx
        lea ebp, ds:[edx+ebp*4+4]
        mov dword ptr ss : [esp+0x2C], eax
        public_6acaeb5 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x38]
        shr eax, 1
        add eax, ecx
        add ecx, ecx
        add edx, eax
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        add eax, edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [ebp]
        shl eax, 1
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        shr edx, cl
        push edx
        push eax
        call public_6aca920
        add ebp, 4
        sub ebx, 4
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        dec ecx
        dec eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6acaeb5
        mov ebx, dword ptr ss : [esp+0x10]
        public_6acaf08 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, 2
        xor ecx, ecx
        sub eax, edx
        test esi, esi
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x38], eax
        je public_6acb00f
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+esi*8]
        mov ebx, edi
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        shl eax, 4
        add eax, edi
        lea ebp, ds:[edi+esi*4]
        sub ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x3C], esi
        jmp public_6acaf62
        public_6acaf5e : nop
        mov ecx, dword ptr ss : [esp+0x44]
        public_6acaf62 : nop
        mov edx, dword ptr ds : [ecx+ebx]
        mov ecx, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ebx+ebp]
        xor eax, ecx
        xor ecx, ecx
        xor ebp, ebp
        add eax, ebx
        mov ebx, edi
        not ebx
        adc ecx, ebp
        add eax, ebx
        mov ebx, edx
        not ebx
        adc ecx, ebp
        add eax, ebx
        adc ecx, ebp
        mov ebp, dword ptr ss : [esp+0x38]
        xor ebx, ebx
        add eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        adc ecx, ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], edx
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ss : [esp+0x2C]
        add eax, ecx
        add edi, eax
        test eax, eax
        mov dword ptr ds : [edx], edi
        je public_6acafc9
        cmp edi, eax
        sbb ecx, ecx
        neg ecx
        mov dword ptr ss : [esp+0x30], ecx
        public_6acafc9 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x2C]
        mov edx, 4
        add eax, edx
        add ebx, edx
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, edx
        add ebp, edx
        add edi, edx
        mov edx, dword ptr ss : [esp+0x3C]
        dec edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x3C], edx
        jne public_6acaf5e
        mov edi, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6acb00f : nop
        lea edx, ds:[esi+ebx*2]
        lea eax, ds:[esi+esi*2]
        test esi, esi
        lea edx, ds:[edi+edx*4]
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x40], edx
        je public_6acb04f
        cmp edx, eax
        jne public_6acb040
        mov edx, dword ptr ds : [eax]
        or ebp, 0xFFFFFFFF
        sub ebp, ecx
        cmp edx, ebp
        ja public_6acb03c
        add edx, ecx
        mov dword ptr ds : [eax], edx
        jmp public_6acb04f
        public_6acb03c : nop
        mov edx, dword ptr ss : [esp+0x40]
        public_6acb040 : nop
        push eax
        lea eax, ss:[esp+0x38]
        push 1
        push eax
        push esi
        push edx
        call public_6ac8500
        public_6acb04f : nop
        lea ebp, ds:[edi+esi*4]
        lea eax, ds:[esi+esi]
        push ebp
        lea edx, ds:[edi+esi*8]
        lea ecx, ds:[esi+esi*2]
        push eax
        push edx
        push ecx
        push ebp
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x48], ecx
        call public_6ac8500
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov eax, offset _public_6ac8910
        je public_6acb07f
        mov eax, offset _public_6ac8500
        public_6acb07f : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x34]
        shl ebx, 4
        push ebp
        add ebx, edi
        push ecx
        push ebx
        push edx
        push ebp
        call eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 0x18
        ret 0x1C
        UNREACHABLE_TRAP(0x6acae10)
    }
}

#undef public_6acae43
#undef public_6acaeb5
#undef public_6acaf08
#undef public_6acaf5e
#undef public_6acaf62
#undef public_6acafc9
#undef public_6acb00f
#undef public_6acb03c
#undef public_6acb040
#undef public_6acb04f
#undef public_6acb07f
