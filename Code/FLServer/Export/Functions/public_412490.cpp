#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4186ba);
CLANG_FORWARD_PROC_SYMBOL(public_4186c0);
CLANG_FORWARD_PROC_SYMBOL(public_418c54);

#define public_4124d4 _public_4124d4
#define public_41254e _public_41254e
#define public_412585 _public_412585
#define public_4125eb _public_4125eb
#define public_4125f5 _public_4125f5
#define public_412667 _public_412667
#define public_412696 _public_412696
#define public_4126b8 _public_4126b8
#define public_4126bf _public_4126bf

PROC_DECLARE(0x412490, internal_412490, public_412490);
extern "C" NAKED register_t __cdecl internal_412490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        cmp eax, 0x111
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        jne public_4126b8
        mov al, byte ptr ds : [public_428c20]
        xor ebx, ebx
        cmp al, bl
        jne public_4124d4
        xor eax, eax
        mov ecx, 0x1E0
        mov edi, offset public_427d08
        rep stosd
        mov ecx, 0x1E0
        mov edi, offset public_428498
        rep stosd
        mov byte ptr ds : [public_428c20], 1
        public_4124d4 : nop
        mov eax, dword ptr ss : [ebp+0x1E4]
        mov ecx, dword ptr ss : [ebp+0x204]
        mov dword ptr ss : [ebp+0x1F0], eax
        mov dword ptr ss : [ebp+0x200], ecx
        call dword ptr ds : [public_41bc20]
        mov dword ptr ss : [ebp+0x204], eax
        call public_4186c0
        cmp eax, ebx
        lea esi, ss:[ebp+0x208]
        mov dword ptr ds : [esi], eax
        je public_4126bf
        cmp eax, 0x10
        jg public_4126bf
        cmp dword ptr ss : [ebp+0x20C], ebx
        mov edi, dword ptr ds : [public_41b950]
        je public_41254e
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [public_41b93c]
        mov eax, dword ptr ds : [esi]
        movzx ecx, word ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [ebp+0x20C]
        push ecx
        push edx
/*FIXUP push offset public_42592c @0x412543*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42592c
        push eax
        call edi
        add esp, 0x18
        public_41254e : nop
        push esi
/*FIXUP push offset public_427d08 @0x41254f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427d08
        mov dword ptr ss : [ebp+0x1E4], ebx
        mov dword ptr ss : [ebp+0x1E8], ebx
        mov dword ptr ss : [ebp+0x1EC], ebx
        mov dword ptr ss : [ebp+0x1FC], ebx
        mov dword ptr ss : [ebp+0x1F8], ebx
        call public_4186ba
        mov esi, dword ptr ds : [esi]
        add esp, 8
        cmp esi, ebx
        jle public_4125eb
        mov eax, offset public_427d70
        public_412585 : nop
        mov ecx, dword ptr ds : [eax-4]
        mov edx, dword ptr ss : [ebp+0x1EC]
        add edx, ecx
        mov ecx, dword ptr ss : [ebp+0x1E8]
        mov dword ptr ss : [ebp+0x1EC], edx
        mov edx, dword ptr ds : [eax]
        add ecx, edx
        mov edx, dword ptr ss : [ebp+0x1E4]
        mov dword ptr ss : [ebp+0x1E8], ecx
        mov ecx, dword ptr ds : [eax-4]
        add edx, ecx
        mov dword ptr ss : [ebp+0x1E4], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax]
        add edx, ecx
        mov dword ptr ss : [ebp+0x1E4], edx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp+0x1FC]
        add edx, ecx
        mov ecx, dword ptr ss : [ebp+0x1F8]
        mov dword ptr ss : [ebp+0x1FC], edx
        mov edx, dword ptr ds : [eax+4]
        add ecx, edx
        add eax, 0x78
        dec esi
        mov dword ptr ss : [ebp+0x1F8], ecx
        jne public_412585
        public_4125eb : nop
        cmp dword ptr ss : [ebp+0x20C], ebx
        je public_412667
        xor esi, esi
        public_4125f5 : nop
        mov edx, dword ptr ds : [esi+public_428508]
        mov eax, dword ptr ds : [esi+public_427d78]
        mov ecx, dword ptr ds : [esi+public_427d74]
        sub eax, edx
        mov edx, dword ptr ds : [esi+public_427d70]
        push eax
        sub ecx, dword ptr ds : [esi+public_428504]
        mov eax, dword ptr ds : [esi+public_427d6c]
        push ecx
        sub edx, dword ptr ds : [esi+public_428500]
        mov ecx, dword ptr ds : [esi+public_4284fc]
        push edx
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+0x20C]
        push eax
/*FIXUP push offset public_425918 @0x412633*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425918
        push ecx
        call edi
        add esi, 0x78
        add esp, 0x18
        cmp esi, 0x780
        jl public_4125f5
        mov edx, dword ptr ss : [ebp+0x20C]
/*FIXUP push offset public_425914 @0x41264f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425914
        push edx
        call edi
        mov eax, dword ptr ss : [ebp+0x20C]
        push eax
        call dword ptr ds : [public_41b940]
        add esp, 0xC
        public_412667 : nop
        mov eax, dword ptr ss : [ebp+0x1F0]
        mov esi, dword ptr ss : [ebp+0x1E4]
        mov ecx, dword ptr ss : [ebp+0x204]
        mov edi, dword ptr ss : [ebp+0x200]
        sub esi, eax
        sub ecx, edi
        mov eax, 0x10624DD3
        mul ecx
        mov ecx, edx
        shr ecx, 6
        cmp ecx, ebx
        jne public_412696
        or ecx, 0xFFFFFFFF
        public_412696 : nop
        lea eax, ds:[esi*8]
        xor edx, edx
        div ecx
        mov ecx, 0x1E0
        mov esi, offset public_427d08
        mov edi, offset public_428498
        mov dword ptr ss : [ebp+0x1F4], eax
        rep movsd
        public_4126b8 : nop
        mov ecx, ebp
        call public_418c54
        public_4126bf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x412490)
    }
}

#undef public_4124d4
#undef public_41254e
#undef public_412585
#undef public_4125eb
#undef public_4125f5
#undef public_412667
#undef public_412696
#undef public_4126b8
#undef public_4126bf
