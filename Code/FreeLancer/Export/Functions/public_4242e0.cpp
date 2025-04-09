#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4242e0);

#define public_424312 _public_424312
#define public_424326 _public_424326
#define public_424328 _public_424328
#define public_424340 _public_424340
#define public_42435f _public_42435f
#define public_424371 _public_424371
#define public_42437f _public_42437f
#define public_42438e _public_42438e
#define public_4243c0 _public_4243c0
#define public_4243d0 _public_4243d0
#define public_4243e0 _public_4243e0
#define public_4243e7 _public_4243e7
#define public_4243f7 _public_4243f7
#define public_424405 _public_424405
#define public_42442d _public_42442d

PROC_DECLARE(0x4242e0, internal_4242e0, public_4242e0);
extern "C" NAKED register_t __cdecl internal_4242e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebp
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        xor dl, dl
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0xA], dl
        jbe public_42442d
        push ebx
        mov bl, byte ptr ss : [esp+0x18]
        add ecx, 4
        cmp ebp, eax
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        jb public_424312
        xor esi, esi
        jmp public_424340
        public_424312 : nop
        mov esi, dword ptr ds : [ecx]
        mov al, byte ptr ds : [esi]
        cmp al, 0x2B
        je public_424326
        cmp al, 0x2D
        je public_424328
        xor bl, bl
        mov byte ptr ss : [esp+0x13], bl
        jmp public_424340
        public_424326 : nop
        cmp al, 0x2D
        public_424328 : nop
        movsx eax, byte ptr ds : [esi+1]
        push eax
        setne bl
        call dword ptr ds : [public_5c70c8]
        add esp, 4
        mov byte ptr ss : [esp+0x13], al
        add esi, 2
        public_424340 : nop
        movsx eax, byte ptr ss : [esp+0x13]
        add eax, 0xFFFFFFBE
        cmp eax, 0x15
        ja public_424405
/*FIXUP movzx ecx, byte ptr ds : [eax+public_42444c] @0x424351*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_424438] @0x424358*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_42437f
  JMPTB cmp eax, 1
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 4
  JMPTB mov ecx, 1
  JMPTB je public_42435f
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 6
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 2
  JMPTB je public_42438e
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 4
  JMPTB je public_424405
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 3
  JMPTB je public_424371
  JMPTB int 3
        public_42435f : nop
        test bl, bl
        sete dl
        mov byte ptr ss : [esp+0x12], 1
        mov byte ptr ds : [edi+0x25], dl
        jmp public_424405
        public_424371 : nop
        mov byte ptr ss : [esp+0x12], 1
        mov byte ptr ds : [edi+0x25], 0
        jmp public_424405
        public_42437f : nop
        test bl, bl
        sete al
        mov byte ptr ss : [esp+0x12], 1
        mov byte ptr ds : [edi+0x24], al
        jmp public_424405
        public_42438e : nop
        push esi
        mov byte ptr ss : [esp+0x16], 1
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        cmp eax, 0x320
        jg public_4243e0
        je public_4243d0
        cmp eax, 0x140
        je public_4243c0
        cmp eax, 0x200
        jne public_4243e7
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], 0x180
        jmp public_424405
        public_4243c0 : nop
        mov dword ptr ds : [edi+8], 0x140
        mov dword ptr ds : [edi+0xC], 0xF0
        jmp public_424405
        public_4243d0 : nop
        mov dword ptr ds : [edi+8], 0x320
        mov dword ptr ds : [edi+0xC], 0x258
        jmp public_424405
        public_4243e0 : nop
        cmp eax, 0x400
        je public_4243f7
        public_4243e7 : nop
        mov dword ptr ds : [edi+8], 0x280
        mov dword ptr ds : [edi+0xC], 0x1E0
        jmp public_424405
        public_4243f7 : nop
        mov dword ptr ds : [edi+8], 0x400
        mov dword ptr ds : [edi+0xC], 0x300
        public_424405 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx]
        inc ebp
        add ecx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], ecx
        jb public_424312
        mov al, byte ptr ss : [esp+0x12]
        pop esi
        pop ebx
        pop edi
        pop ebp
        add esp, 8
        ret 4
        public_42442d : nop
        pop edi
        mov al, dl
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4242e0)
        ASM_EXPORT_ENTRY_SINGLE(0x424405, public_424405)
    }
}

#undef public_424312
#undef public_424326
#undef public_424328
#undef public_424340
#undef public_42435f
#undef public_424371
#undef public_42437f
#undef public_42438e
#undef public_4243c0
#undef public_4243d0
#undef public_4243e0
#undef public_4243e7
#undef public_4243f7
#undef public_424405
#undef public_42442d

#pragma init_seg(compiler)
extern "C" void const* const public_424405 = __AsmFindLabelExport(&internal_4242e0, 0x424405);
