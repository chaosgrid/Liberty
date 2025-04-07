#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277dd0);
CLANG_FORWARD_PROC_SYMBOL(public_62781b0);
CLANG_FORWARD_PROC_SYMBOL(public_6278230);
CLANG_FORWARD_PROC_SYMBOL(public_6278270);
CLANG_FORWARD_PROC_SYMBOL(public_6278290);
CLANG_FORWARD_PROC_SYMBOL(public_62782b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279af0);
CLANG_FORWARD_PROC_SYMBOL(public_6279d70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6272fb2 _public_6272fb2
#define public_6272fe3 _public_6272fe3
#define public_6273010 _public_6273010
#define public_627302d _public_627302d
#define public_6273031 _public_6273031
#define public_6273055 _public_6273055
#define public_62730a6 _public_62730a6
#define public_62730c7 _public_62730c7
#define public_62730f0 _public_62730f0
#define public_62730fb _public_62730fb
#define public_6273115 _public_6273115
#define public_627311d _public_627311d

PROC_DECLARE(0x6272f90, internal_6272f90, public_6272f90);
extern "C" NAKED register_t __cdecl internal_6272f90()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x14], ecx
        add ecx, 4
        push esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x14], 7
        push edi
        public_6272fb2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[ecx-4]
        cmp edx, eax
        lea esi, ds:[ecx-4]
        je public_627311d
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0xC]
        test edx, edx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], eax
        je public_627302d
        mov edx, eax
        cmp eax, edx
        jne public_627302d
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [ecx+4]
        mov edi, ebp
        je public_6273010
        public_6272fe3 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6278230
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ss:[ebp+0xC]
        call public_6279d70
        push ebp
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx+4]
        add esp, 4
        cmp edi, eax
        mov ebp, edi
        jne public_6272fe3
        public_6273010 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6273055
        public_627302d : nop
        cmp eax, edi
        je public_6273055
        public_6273031 : nop
        lea ecx, ss:[esp+0x14]
        mov ebx, eax
        call public_62782b0
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6277dd0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jne public_6273031
        mov ecx, dword ptr ss : [esp+0x28]
        public_6273055 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edx+1]
        mov ebx, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], al
        mov edx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dl, byte ptr ss : [ebp+0x35]
        test dl, dl
        mov eax, dword ptr ds : [esi+4]
        jne public_62730c7
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x34]
        push ecx
        push eax
        mov ecx, esi
        call public_6278290
        mov edi, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[edi+0xC]
        push eax
        call public_6279af0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebx, eax
        jne public_62730a6
        mov ebx, edi
        public_62730a6 : nop
        mov eax, dword ptr ss : [ebp]
        push edi
        push eax
        mov ecx, esi
        call public_62781b0
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        push ecx
        mov ecx, esi
        call public_62781b0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi+8], eax
        public_62730c7 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, edi
        je public_6273115
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_62730fb
        nop 
        public_62730f0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_62730f0
        public_62730fb : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6278270
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_627311d
        public_6273115 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_627311d : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x14
        add ecx, 0x14
        dec eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6272fb2
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6272f90)
    }
}

#undef public_6272fb2
#undef public_6272fe3
#undef public_6273010
#undef public_627302d
#undef public_6273031
#undef public_6273055
#undef public_62730a6
#undef public_62730c7
#undef public_62730f0
#undef public_62730fb
#undef public_6273115
#undef public_627311d
